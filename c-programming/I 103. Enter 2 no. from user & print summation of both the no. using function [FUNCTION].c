#include<stdio.h>
#include<conio.h>
void main()
{
    sum(); 
    getch();
}

void sum()
{
    int a,b,c;
    printf("Enter any 2 number for summation - ");
    scanf("%d %d",&a,&b);
    c = a+b;
    printf("Summation of both the numbers are - %d ",c);
}