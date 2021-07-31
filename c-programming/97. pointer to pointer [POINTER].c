#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 10 ,*p , **q;
    p=&a;
    q=&p;
    printf("a = %d , p = %d , *p = %d , q = %d , *q = %d , **q = %d ",a,p,*p,q,*q,**q);
    getch();
}