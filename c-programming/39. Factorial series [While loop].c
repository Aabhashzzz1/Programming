#include<stdio.h>
#include<conio.h>
void main()
{
    int f=1,n;
    printf("Enter any number - ");
    scanf("%d",&n);
    while(n>1)
    {
        f = f * n;
        n--;
    }
    printf("Factorial = %d",f);
    getch();
}