#include<stdio.h>
#include<conio.h>

int check;
void main()
{
    int n,isPrime;
    printf("Enter any no. to check whether it's prime no. or not using recursion - ");
    scanf("%d",&n);
    check = n/2;
    isPrime = prime(n);
    if(isPrime==1)
        printf("PRIME NUMBER = %d ",n);
    else
        printf("NON-PRIME NUMBER = %d ",n);
    getch();
}

void prime(int n)
{
    if(n==1)
        printf("PRIME NUMBER = %d ",n);
    if(check==1) 
        return 1;
    else
    {
        if(n%check==0)
            return 0;
        else
        {
            check -= 1;
            prime(n);
        }
    }
}