#include<stdio.h>
#include<conio.h>
void main()
{
    printf("Calling of functions \n");
    printf("First function called (output manner should be ) - \n");
    first();
    printf("Second function called (output manner should be ) - \n");
    second();
    printf("Third function called (output manner should be ) - \n");
    third();
    getch();
}

void first()
{
    second();
    printf("1st fun \n");
}

void second()
{
    third();
    printf("2nd fun \n");
}

void third()
{
    printf("3rd fun \n");
}