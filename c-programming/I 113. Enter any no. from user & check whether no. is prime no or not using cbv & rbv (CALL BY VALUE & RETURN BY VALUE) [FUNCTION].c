#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter any number from user to check no. is prime no. or not using cbv & rbv - ");
    scanf("%d",&n);
    n = prime(n);
    getch();
}

void prime(int n)
{
    int i,f=0;
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("NON-PRIME NUMBER ");
    }
    else
    {
        printf("PRIME NUMBER ");
    }
    return f;
}