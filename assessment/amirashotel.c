#include <stdio.h>
int main()
{
    int food, qut, amount;
    int net_amount = 0;
     menu :
    printf("darshan hotal\n");
    printf("pizza=150\n");
    printf("mansuriyam=100\n");
    printf("dhosa=170\n");
    printf("dhokla=300\n");
    printf("darshan special=500\n");
    printf("gujrati dish=250\n");
    printf("enter number :");
    scanf("%d", &food);

    switch (food)
    {
    case 1:
        printf("pizza=150\n");
        printf("enter qut :");
        scanf("%d", &qut);
        amount = qut * 150;
        printf("amount = %d \n", amount);
        net_amount += amount;
        printf("net amount = %d \n", net_amount);

        break;
    case 2:
        printf("mansuriyam=100\n");
        printf("enter qut :");
        scanf("%d", &qut);
        amount = qut * 100;
        printf("amount = %d \n", amount);
        net_amount += amount;
        printf("net amount = %d \n, net_amount");

        break;
    case 3:
        printf("dhosa=170\n");
        printf("enter qut :");
        scanf("%d", &qut);
        amount = qut * 170;
        printf("amount = %d \n", amount);
        net_amount += amount;
        printf("net amount = %d \n, net_amount");

        break;
    case 4:
        printf("dhokla=300\n");
        printf("enter qut :");
        scanf("%d", &qut);
        amount = qut * 300;
        printf("amount = %d \n", amount);
        net_amount += amount;
        printf("net_amount = %d \n, net_amount");

        break;

    case 5:
        printf("darshan special=500\n");
        printf("enter qut :");
        scanf("%d", &qut);
        amount = qut * 500;
        printf("amount = %d \n", amount);
        net_amount += amount;
        printf("net_amount = %d \n, net_amount");

        break;
    case 6:
        printf("gujrati dish=250");
        printf("enter qut :");
        scanf("%d", &qut);
        amount = qut * 250;
        printf("amount = %d \n", amount);
        net_amount += amount;       
        printf("net_amount = %d \n, net_amount");

        break;
        printf("you have no selecte  an item");
    }
    char yes;
    no:
    printf("\nyou want to more order 'Y' OR 'N' :  ");
    scanf("%s", &yes);
    if(yes=='y'||yes=='Y'){
    goto menu;
        
    }
   else if (yes=='n'||yes=='N')
   {
    printf("net amount = %d/-", net_amount);
   }
    else
    {
    printf("enter valid input !!");
    goto no;
    }
    

    return 0;}
