#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 10 ,*p;
    p=&a;
    printf("a = %d , p = %d , *p = %d ",a,p,*p);
    getch();
}