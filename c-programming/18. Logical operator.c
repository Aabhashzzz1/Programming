#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=10,c=10,x,y;
    printf("Logical operator using pre-defined values\n");
    x = a == b && b == c;
    y = a++ == b-- || b++ == --c;
    printf("Logical AND operator - %d & Logical OR operator - %d\n",x,y); //logical AND operator also known as SHORT-CURCUITED AND
    
    printf("Logical operator using user-defined values\n");
    printf("Enter values for Logical operator - ");
    scanf("%d %d %d",&a,&b,&c);
    x = a++ == b-- && b++ == --c;
    y = a == b || b == c;
    printf("Logical AND operator - %d & Logical OR operator - %d\n",x,y); //logical OR operator also known as SHORT-CURCUITED OR
    
    getch();
}