#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("ENTER TWO VALUES : ");
    scanf("%d %d",&a,&b);
    printf("BEFORE SWAP - a = %d & b = %d \n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("AFTER SWAP - a = %d & b = %d",a,b);
    getch();
}
