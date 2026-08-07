#include <stdio.h>
#include <string.h>

int main()
{
    int n = 1;
    printf("1 + 2 = %d\n", n = n + 2);
    
    // Operators +=, -=, *=, /=, %=
    n = 1;
    printf("1 + 2 = %d\n", n, n += 2);

    int i = 0;
    // Increment then show
    printf("++i = %d\n", i, ++i);
    i = 0;
    // Show then increment
    printf("i++ = %d\n", i, i++); 

    return 0;
}
