#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("ENTER TWO VALUE : ");
    scanf("%d %d",&a,&b);
    printf("BEFORE SWAP - a = %d & b = %d \n",a,b);
    c = a;
    a = b;
    b = c;
    printf("AFTER SWAP - a = %d & b = %d",a,b);
    getch();
}
