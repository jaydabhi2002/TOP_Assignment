#include <stdio.h>

struct employee
{
    int no;
    char name[30];
    char address;
    int age;
};

int main()
{
    struct employee emp;

    printf("\nEnter details :\n");

    printf("No :");
    scanf("%d", &emp.no);

    printf("Name :");
    scanf("%s", &emp.name);

    printf("address :");
    scanf("%d", &emp.address);

    printf("age :");
    scanf("%s%s", &emp.age);

    return 0;
}
