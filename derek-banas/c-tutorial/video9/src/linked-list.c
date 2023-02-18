#include <stdio.h>
#include <stdlib.h>

typedef struct Product {
    float price;
    char name[20];
    struct Product * next;
} Product;

Product * first = NULL;
Product * last = NULL;

void create_new_list()
{
    Product * new_prod = (Product *) malloc(sizeof(Product));
    printf("Enter product name: ");
    scanf("%s", &(new_prod)->name);
    printf("Enter product price: ");
    scanf("%f", &(new_prod)->price);
    new_prod->next = NULL;
    first = last = new_prod;
}

void input_data()
{ if (first == NULL) {
        create_new_list();
    } else {
        Product * new_prod = (Product *) malloc(sizeof(Product));
        printf("Enter product name: ");
        scanf("%s", &(new_prod)->name);
        printf("Enter product price: ");
        scanf("%f", &(new_prod)->price);
        // 1 elem list
        if (first == last) {
            first->next = new_prod;
            last = new_prod;
            new_prod->next = NULL;
        // n_elems > 1
        } else {
            last->next = new_prod;
            new_prod->next = NULL;
            last = new_prod;
        }
    }
}

void print_list()
{
    Product * products = first;
    printf("Products entered: \n");
    while (products != NULL) {
        printf("%s cost %.2f\n\n", products->name, products->price);
        products = products->next;
    }
}

int main()
{
    input_data();
    input_data();
    print_list();
    return 0;
}
