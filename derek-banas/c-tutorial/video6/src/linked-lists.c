#include <stdio.h>

typedef struct product {
    const char *name;
    float price;
    struct product *next;
} product;

void printLinkedList(product *pProduct)
{
    product *curr = pProduct;
    while (curr != NULL) {
        printf("Name: %s, Price: %.2f\n", curr->name, curr->price);
        curr = curr->next;
    }
    printf("End of Linked List\n");
}

int main()
{
    product tomato = {"Tomato", .51, NULL};
    product potato = {"Potato", 1.21, NULL};
    product lemon  = {"Lemon", 1.69, NULL};
    product milk   = {"Milk", 3.09, NULL};
    product turkey = {"Turkey", 1.86, NULL};

    tomato.next = &potato;
    potato.next = &lemon;
    lemon.next  = &milk;
    milk.next   = &turkey;

    product apple = {"Apple", 1.58, NULL};
    lemon.next = &apple;
    apple.next = &milk;

    printLinkedList(&tomato);

    return 0;
}
