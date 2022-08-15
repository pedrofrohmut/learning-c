#include <stdio.h>

int main()
{
    printf("\n");
    int n1 = 1, n2 = 2;
    printf("Is 1 < 2 ? %d\n\n", n1 < n2);
    if (n1 > n2)
        printf(" %d is greater then %d\n\n", n1, n2);
    else if (n1 < n2)
        printf(" %d is smaller then %d\n\n", n1, n2);
    else
        printf(" %d is equal then %d\n\n", n1, n2);

    printf("\n");
    int age = 38;
    if (age > 21 && age < 35) {
        printf("They are welcome\n");
    } else {
        printf("They are NOT welcome\n");
    }

    // Missed less then 10 of work AND
    // Has over 30.000 on sales AND
    // Signed up for more then 30 new customers
    char name[] = "Bob";
    int missedDays = 8;
    int totalSales = 24000;
    int newCustomers = 32;
    if (missedDays < 10 && totalSales > 30000 && newCustomers > 30) {
        printf("%s deserves a promotion\n", name);
    } else {
        printf("%s does NOT deserve a promotion yet\n", name);
    }

    return 0;
}
