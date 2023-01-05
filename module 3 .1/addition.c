#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("enter first value :");
    scanf("%d", &x);
    printf("enter second value :");
    scanf("%d", &y);
    float z = (float)x / (float)y;
    printf("add= %d \n", x + y);
    printf("sub= %d \n", x - y);
    printf("mul= %d \n", x * y);
    printf("div= %f \n", z);
    printf("mod= %d \n", x % y);

    printf("\n");
    printf("\n");
    printf("\n");
    return 0;
}