#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float price;
    char name[20];
} Product;

int main()
{
    Product * products;
    int n_prd;
    printf("Enter the number of products\n");
    scanf("%d", &n_prd);
    products = (Product *) malloc(n_prd * sizeof(Product));
    for (int i = 0; i < n_prd; i++) {
        printf("Enter a product name: \n");
        scanf("%s", &(products+i)->name);
        printf("Enter a product price: \n");
        scanf("%f", &(products+i)->price);
    }
    printf("Products Stored\n");
    for (int i = 0; i < n_prd; i++) {
        printf("%s\t%.2f\n", (products+i)->name, (products+i)->price);
    }
    free(products);
    return 0;
}
