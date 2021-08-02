#include<stdio.h>
#include<conio.h>
void main()
{
    char a[1000];
    int f;
    printf("Enter any string from user to check whether it is palindrome or not using cbv & rbv - ");
    gets(a);
    f = palindrome(a);
    getch();
}

void palindrome(char a[1000])
{
    int i=0,j,f=0;
    j = strlen(a)-1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            f=1;
            break;
        }
        i++;
        j--;
    }
    if(f==0)
    {
        printf("PALINDROME \n");
    }
    else
    {
        printf("NON-PALINDROME \n");
    }
    return f;
}