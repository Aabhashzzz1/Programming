#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,f=0;
    printf("Enter any number to check whether its Prime number or not - ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f == 1)
    {
        printf("NON-PRIME NUMBER ");
    }
    else
    {
        printf("PRIME ");
    }
    getch();
}