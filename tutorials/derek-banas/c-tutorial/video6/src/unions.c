#include <stdio.h>

typedef union {
    short individual;
    float pound;
    float ounce;
} Amount;

typedef enum { INDIV, OUNCE, POUND } Quantity;

typedef struct {
    char *brand;
    Amount amount;
} OrangeProduct;

int main()
{
    Amount orangeAmount = { .ounce = 16 };
    orangeAmount.individual = 4;
    printf("Orange Juice amount %.2f: Size: %d\n",
            orangeAmount.ounce, sizeof(orangeAmount.ounce));

    printf("Number of Oranges: %d, Size: %d\n",
            orangeAmount.individual, sizeof(orangeAmount.individual));

    orangeAmount.pound = 1.5;
    printf("Orange Juice amount %.2f: Size: %d\n",
            orangeAmount.pound, sizeof(orangeAmount.pound));
    //------------------------------------------------------------------------------
    OrangeProduct prodOrd = { .brand = "Chiquita", .amount.ounce = 16 };
    printf("You bought %.2f ounces of %s Orange\n",
            prodOrd.amount.ounce, prodOrd.brand);
    //------------------------------------------------------------------------------
    /* Quantity quantityType = INDIV; */
    /* orangeAmount.individual = 4; */
    /* Quantity quantityType = OUNCE; */
    /* orangeAmount.ounce = 3.8; */
    Quantity quantityType = POUND;
    orangeAmount.pound = 7.3;
    if (quantityType == INDIV) {
        printf("You bought %d oranges\n", orangeAmount.individual);
    } else if (quantityType == OUNCE) {
        printf("You bought %.2f ounces of oragens\n", orangeAmount.ounce);
    } else if (quantityType == POUND) {
        printf("You bought %.2f pound of oranges\n", orangeAmount.pound);
    } else {
        printf("You bought smoething else\n");
    }
    return 0;
}
