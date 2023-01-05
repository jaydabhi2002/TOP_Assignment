#include<stdio.h>
int main(){
int a,b;
printf("enter first number A :");
scanf("%d",&a);
printf("enter second value B :");
scanf("%d",&b);
//a=20 b=10
a = a + b;//20+10=30
b = a - b;//30-10=20
a = a - b;
printf("A= %d\n", a);
printf("B= %d\n", b);
return 0;
}