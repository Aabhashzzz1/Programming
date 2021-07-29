#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,c,i=1,n=7;
    printf("Fibonacci series - ");
    printf("%d %d ",a,b);
    while(i<=n)
    {
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
    getch();
}