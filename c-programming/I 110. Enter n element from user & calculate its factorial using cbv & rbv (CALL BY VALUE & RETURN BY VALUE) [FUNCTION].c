#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f;
    printf("Enter n element for factorial using call by value & return by value - ");
    scanf("%d",&n);
    f = fact(n);
    printf("Factorial of %d = %d ",n,f);
    getch();
}

void fact(int n)
{
    int f=1;
    while(n>1)
    {
        f *= n;
        n--;
    }
    return f;
}