#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0,temp;
    printf("Enter any number to check whether number is Palindrome or not - ");
    scanf("%d",&n);
    temp = n;
    while(n!=0)
    {
        r = n%10;
        sum = sum * 10 + r;
        n = n/10;
    }
    if(sum == temp)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NON-PALINDROME");
    }
    getch();
}