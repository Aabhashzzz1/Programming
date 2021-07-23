#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter a year to check whether it's Leap Year or not - ");
    scanf("%d",&a);

    if(a%400==0)
    {
        printf("Leap Year = %d",a);
    }
    else if(a%100==0)
    {
        printf("Non-Leap Year = %d",a);
    }
    else if(a%4==0)
    {
        printf("Leap Year = %d",a);
    }
    else
    {
        printf("Non-Leap Year",a);
    }
    getch();
}