#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter any two values for summation & print using call by value & return by value - ");
    scanf("%d %d",&a,&b);
    c = sum(a,b);
    printf("Summation of both the numbers are - %d",c);
    getch();
}

void sum(int a,int b)
{
    int c;
    c = a+b;
    return c;
}