#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0;
    printf("Enter any number to print all individual digit on separate number - ");
    scanf("%d",&n);
    while(n!=0)
    {
        r = n%10;
        sum = sum * 10 + r;
        n = n/10;
    }
    printf("Individual digits are - \n");
    while(sum!=0)
    {
        r = sum%10;
        printf("%d\n",r);
        sum = sum/10;
    }
    getch();
}