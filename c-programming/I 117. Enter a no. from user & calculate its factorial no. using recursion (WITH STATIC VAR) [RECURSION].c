#include<stdio.h>
#include<conio.h>
void main()
{
    int n,f;
    printf("Enter n element for factorial using recursion - ");
    scanf("%d",&n);
    f = fact(n);
    printf("Factorial of %d = %d ",n,f);
    getch();
}

int fact(int n)
{
    static int f=1;
    if(n>1)
    {
        f = f * n;
        n--;
        fact(n);
    }
    return f;
}