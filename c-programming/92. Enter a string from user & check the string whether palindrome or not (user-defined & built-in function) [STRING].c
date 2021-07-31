#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[1000],b[1000];
    printf("Enter any string to check whether it palindrome or not - ");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(!strcmp(a,b))
    {
        printf("THE STRING YOU HAVE ENTERED IS PALINDROME ");
    }
    else
    {
        printf("THE STRING YOU HAVE ENTERED IS NON-PALINDROME ");
    }
    getch();
}
