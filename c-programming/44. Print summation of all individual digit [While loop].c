#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0;
    printf("Enter any number to print summation of individual digits - ");
    scanf("%d",&n);
    while(n!=0)
    {
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    printf("%d ",sum);
    getch();
}