#include<stdio.h>
#include<conio.h>
void main()
{
    printf("Increasing series - ");
    show();
    getch();
}

void show()
{
    static int a=1;
    if(a<=10)
    {
        printf("%d ",a);
        a++;
        show();
    }
}