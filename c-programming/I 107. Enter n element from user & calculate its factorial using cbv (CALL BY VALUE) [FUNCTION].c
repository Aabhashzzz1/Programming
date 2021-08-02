#include<stdio.h>
#include<conio.h>

int n,factorial;
void main()
{
    printf("Enter n element for factorial using call by value - ");
    scanf("%d",&n);
    factorial = n;
    fact(n);
    getch();
}

void fact(int n)
{
    long int f=1;
    while(n>1)
    {
        f *= n;
        n--;
    }
    printf("Factorial of %d = %ld ",factorial,f);
}