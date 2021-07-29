#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter two numbers - ");
    scanf("%d %d",&a,&b);
    //a > b ? printf("Greater number = %d",a) : printf("Greater number = %d",b);
    a = a>b?a:b;
    printf("Greater number = %d",a);
    getch();
}