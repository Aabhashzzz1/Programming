#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e;
    a = 10;
    b = a++ + ++a + a++;
    c = --b;
    d = c++;
    e = a;
    printf("VALUE OF a = %d , b = %d , c = %d , d = %d & e = %d \n",a,b,c,d,e);
    a = 10;
    printf("VALUE OF a = %d , %d & %d",++a,a--,a++);
    getch();
}
