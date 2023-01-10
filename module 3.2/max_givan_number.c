#include <stdio.h>
int main()
{
    int a[3], i, max = 0;
    printf("Enter Four Value :");
    for (i = 0; i <= 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 3; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    
    }
    printf("Maximum is : %d", max);
    return 0;
}
