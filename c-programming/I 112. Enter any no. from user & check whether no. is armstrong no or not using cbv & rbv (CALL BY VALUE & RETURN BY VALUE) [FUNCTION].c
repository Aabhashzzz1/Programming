#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter any no. from user to check whether no. is armstrong or not using cbv & rbv - ");
    scanf("%d",&n);
    n = armstrong(n);
    getch();
}

void armstrong(int n)
{
    int temp,r,sum=0;
    temp = n;
    while(n!=0)
    {
        r = n%10;
        sum += r*r*r;
        n = n/10;
    }
    if(sum==temp)
    {
        printf("ARMSTRONG NUMBER ");
    }
    else
    {
        printf("NON-ARMSTRONG NUMBER ");
    }
    return sum;
}