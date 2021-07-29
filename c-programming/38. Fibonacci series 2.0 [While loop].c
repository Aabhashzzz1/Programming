#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,c,i=3,n;
    printf("Fibonacci Series \n");
    printf("Enter number of elements - ");
    scanf("%d",&n);
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