#include <stdio.h>
int main()
{
    int a, b;
    printf("enter 1st value :");
    scanf("%d", &a);
    printf("enter 2nd value :");
    scanf("%d", &b);
    float div = (float)a / (float)b;
    // output :
    printf("output :\n \naddition = %d\n", a + b);
    printf("subtraction = %d\n", a - b);
    printf("multiplication = %d\n", a * b);
    printf("division = %.3f\n", div);
    printf("modulo = %d\n", a % b);

    return 0;
}