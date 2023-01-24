#include <stdio.h>
#include <string.h>

int main()
{
    int length = 0;
    char string[20];

    printf("Enter the string: \n");
    gets(string);

    while (string[length] != '\0')
        length++;
    printf("Length of string is: %d", length);

    return 0;
}
