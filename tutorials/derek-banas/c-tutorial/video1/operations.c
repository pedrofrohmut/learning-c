#include <stdio.h>
#include <string.h>

int main()
{
    int num1 = 12, num2 = 15, numAnswers;
    printf("Integer Calculations\n");
    printf("Division: %d / %d = %d\n", num1, num2, num2 / num1);
    printf("Modulus: %d/%d = %d\n", num2, num1, num2 % num1);
    
    float decimal1 = 1.2, decimal2 = 1.5, decimalAnswers;
    printf("\nFloat Calculations\n");
    printf("Division: %.1f/%.1f = %f\n", decimal1, decimal2, decimal1 / decimal2);

    printf("\nOrder of operations (Operation precedence)\n");
    printf("3 + 6 * 10 = %d\n", 3 + 6 * 10);
    printf("(3 + 6) * 10 = %d\n", (3 + 6) * 10); 

    return 0;
}
