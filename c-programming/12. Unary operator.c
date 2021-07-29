#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 10,b,c;
    printf("INCREMENT \n");
    printf("VALUE OF a = %d \n",a);
    b = ++a; // pre-increment
    printf("VALUE OF b = %d \n",b);
    c = b++; // post-increment
    printf("VALUE OF c = %d \n",c);

    printf("\n");
    a=10;
    printf("DECREMENT \n");
    printf("VALUE OF a = %d \n",a);
    b = --a; //pre-decrement
    printf("VALUE OF b = %d \n",b);
    c = a--; //post-decrement
    printf("VALUE OF c = %d \n",c);
    getch();
}
