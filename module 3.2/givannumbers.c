#include <stdio.h>
int main()
{
    int num,i,sum = 0;

    printf("Enter the limit\n");
    scanf("%d", &num); 

    for (i = 1; i <= num; i++)
    {
       if(i % 2 !=0)
           sum = sum + i;
    }
    printf("sum of all odd numbers between 1 and %d is %d\n", num,sum);

    return 0;
}
