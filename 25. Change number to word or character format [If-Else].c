#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter any number between [0-5] to print it's word or character - ");
    scanf("%d",&a);
    if(a==0)
    {
        printf("ZERO");
    }
    else if(a==1)
    {
        printf("ONE");
    }
    else if(a==2)
    {
        printf("TWO");
    }
    else if(a==3)
    {
        printf("THREE");
    }
    else if(a==4)
    {
        printf("FOUR");
    }
    else if(a==5)
    {
        printf("FIVE");
    }
    else
    {
        printf("In-valid Number");
    }
    getch();
}