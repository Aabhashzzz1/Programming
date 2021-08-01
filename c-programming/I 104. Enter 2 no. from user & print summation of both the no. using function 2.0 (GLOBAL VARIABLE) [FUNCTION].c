#include<stdio.h>
#include<conio.h>

int a,b,c;
void main()
{
    printf("Enter 2 number for summation - ");
    scanf("%d %d",&a,&b);
    sum();
    printf("Summation of both the numbers are - %d ",c);
    getch();
}

void sum()
{
    c = a+b;
}