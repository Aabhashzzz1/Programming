#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter any 2 no. from user & swap the no. using cba & cbr (CALL BY ADDRESS & CALL BY REFERENCE - ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    getch();
}

void swap(int *p,int *q)
{
    int c;
    printf("Before swapping the value is a = %d & b = %d \n",*p,*q);
    c = *p;
    *p = *q;
    *q = c;
    printf("After swapping the value is a = %d & b = %d ",*p,*q);
}