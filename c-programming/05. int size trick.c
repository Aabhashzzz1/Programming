#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 32765; //integer size = 32767 to -32768 (2 bytes)
    printf("BEFORE ADDITION a = 32765 \n");
    a = a+5;
    //integer value change to -32766 in TURBOC++ compiler.
    // other compiler or ide are new so they provide output 32770.
    printf("AFTER ADDITION a = %d",a);
    getch();
}
