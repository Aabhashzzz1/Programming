#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 value to find Maximum amoung them - ");
    scanf("%d %d %d",&a,&b,&c);
    a = a>b ? (a>c ? a:c) : (b>c ? b:c);
    printf("Maximum Number - %d",a);
    getch();
}