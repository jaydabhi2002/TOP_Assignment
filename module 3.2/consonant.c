#include<stdio.h>
int main(){
    printf("\n\n check alfabate is Vowel or Consonsnt : \n");
    printf("enter alphabet \"a-z\" :");
    char ch;
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("\nthis is vowel=\'%c\'", ch);
        break;
    default:
        printf("\nthis is consonant= \'%c\'", ch);
    }
    return 0;
}