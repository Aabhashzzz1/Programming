#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter a number to check whether it's Even or Odd - ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("%d is a Even Number ",a);
    }
    else
    {
        printf("%d is a Odd Number ",a);
    }
    getch();
}