#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[1000],*p,*q;
    int i,f=0;
    p=&a[0];
    printf("Enter any string to check whether it is palindrome or not - ");
    gets(a);
    i = (strlen(a)-1);
    q = &a[i];
    while(p<q)
    {
        if(*p!=*q)
        {
            f=1;
            break;
        }
        p++;
        q--;
    }
    if(f==0)
    {
        printf("STRING IS A PALINDROME ");
    }
    else
    {
        printf("STRING IS NOT A PALINDROME");
    }
    getch();
}