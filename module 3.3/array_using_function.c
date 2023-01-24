#include <stdio.h>
int maxnumber(int arr[], int n)
{
    int i, max = 0;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int n;
    int max = 0;
    int i;
    printf("enter the number of value n : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter numbar: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ,", arr[i]);
    }
    max = maxnumber(arr, n);
    printf("\nmax number : %d", max);

    return 0;
}