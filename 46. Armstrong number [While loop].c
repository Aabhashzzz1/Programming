#include<stdio.h>
#include<stdio.h>
void main()
{
    int n,r,sum=0,temp;
    printf("Enter any number to check whether number is Armstrong number or not - ");
    scanf("%d",&n);
    temp = n;
    while(n!=0)
    {
        r = n%10;
        sum = sum + ( r * r * r );
        n = n/10;
    }
    if(sum == temp)
    {
        printf("ARMSTRONG NUMBER ");
    }
    else
    {
        printf("NON-ARMSTRONG NUMBER ");
    }
    getch();
}