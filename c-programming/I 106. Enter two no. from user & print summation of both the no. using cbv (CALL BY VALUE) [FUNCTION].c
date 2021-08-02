#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter any two values for summation & print using call by value - ");
    scanf("%d %d",&a,&b);
    sum(a,b);
    getch();
}

void sum(int a,int b)
{
    int c;
    c = a+b;
    printf("Summation of both the numbers are - %d ",c);
}