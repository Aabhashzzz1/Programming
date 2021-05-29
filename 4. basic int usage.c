#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 10;
    printf("VALUE OF a = %d \n",a);
    a = 20;
    printf("VALUE OF a now = %d \n",a);
    a= 30;
    a = 40; //overlap the value a = 30 and change a = 40
    printf("VALUE OF a now = %d \n",a);
    getch();
}
