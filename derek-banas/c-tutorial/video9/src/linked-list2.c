#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define NAME_LEN 30

typedef struct Product {
    float price;
    char name[NAME_LEN];
    struct Product * next;
} Product;

Product * first = NULL;
Product * last = NULL;

void add_to_list(Product * new_prod)
{
    if (first == NULL) {
        first = new_prod;
    } else {
        last->next = new_prod;
    }
    last = new_prod;
}

void populate(Product * new_prod)
{
    printf("Name: ");
    scanf("%s", &new_prod->name);
    printf("Price: ");
    scanf("%f", &new_prod->price);
    new_prod->next = NULL;
}

void input_data()
{
    Product * new_prod = malloc(sizeof(Product));
    populate(new_prod);
    add_to_list(new_prod);
}

void print_list()
{
    Product * products = first;
    printf("Products entered:\n");
    int i = 1;
    while (products != NULL) {
        printf("%d. %s $%.2f\n", i, products->name, products->price);
        products = products->next;
        i++;
    }
}

bool delete_by_name(char name[])
{
    Product * before  = NULL;
    Product * current = first;
    while (current != NULL) {
        bool is_found = strcmp(name, current->name) == 0;
        if (is_found) {
            // DELETE
            Product * temp = current;
            if (current == first) {
                first = current->next;
            } else if (current == last) {
                last = before;
                last->next = NULL;
            } else {
                before->next = current->next;
            }
            free(temp);
            return true;
        }
        // GO NEXT
        before = current;
        current = current->next;
    }
    return false;
}

Product * search_by_name(char name[])
{
    Product * curr = first; // Current
    while (curr != NULL) {
        // strncmp => String Compare that returns 0, negative or positive as
        // result of comparing n characters
        bool is_found = strncmp(curr->name, name, NAME_LEN) == 0;
        if (is_found) return curr;
        curr = curr->next;
    }
    return NULL;
}

void free_list()
{
    Product * curr = first;
    while (curr != NULL) {
        Product * temp = curr;
        curr = curr->next;
        free(temp);
    }
}

int main()
{
    // Input: Read amount and products{ name, price }
    int amt = 0;
    printf("How many products?\n");
    scanf("%d", &amt);
    if (amt < 1) return 1; // Less than 1 nothing to do
    for (int i = 0; i < amt; i++) { input_data(); }

    // Output
    printf("\n=> Before\n");
    print_list();

    // Search a product by name
    char prod_name[NAME_LEN];
    printf("\nEnter the product name to search: ");
    scanf("%s", &prod_name);

    Product * found = search_by_name(prod_name);
    if (found != NULL) {
        printf("FOUND => Name: %s, Price: %.2f\n", found->name, found->price);
    } else {
        printf("NOT FOUND\n");
        return 1;
    }

    // Delete a product
    printf("\nEnter the product name to delete: ");
    scanf("%s", &prod_name);
    delete_by_name(prod_name);

    // Output
    printf("\n=> After\n");
    print_list();

    // Clean Memory
    free_list();

    return 0;
}
