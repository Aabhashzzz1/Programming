#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter a number to check whether number is EVEN or ODD - ");
    scanf("%d",&a);
    a%2 == 0 ? printf("%d is Even Number ",a) : printf("%d is Odd Number",a);
    //  a%2 ? printf("%d is Odd Number ",a) : printf("%d is Even Number",a);
    //  a%2 ==1 ? printf("%d is Odd Number ",a) : printf("%d is Even Number",a);
    getch();
}