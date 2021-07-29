#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter a year to check it is Leap year or not - ");
    scanf("%d",&a);
    ( (a%4==0 && a%100!=0) || a%400==0 ) ? printf("Leap Year = %d",a) :  printf("Non-Leap Year = %d",a);
//  ( a%4==0 && a%100!=0 ) ? printf("Leap Year = %d",a) : ( a%400==0 ) ? printf("Leap Year = %d",a) : printf("Non-Leap Year = %d",a);
    getch();
}