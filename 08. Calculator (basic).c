#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("ENTER TWO VALUES : ");
    scanf("%d %d",&a,&b);
    c = a+b;
    printf("ADDITION OF %d AND %d = %d",a,b,c);
    c = a-b;
    printf("\nSUBTACTION OF %d AND %d = %d",a,b,c);
    c = a*b;
    printf("\nMULTIPLICATION OF %d AND %d = %d",a,b,c);
    c = a/b;
    printf("\nDIVISION OF %d AND %d = %d",a,b,c);
    getch();
}
