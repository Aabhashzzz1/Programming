#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter any number between [0-5] to print it's word or character - ");
    scanf("%d",&a);
    switch(a)
    {
        case 0: printf("ZERO"); break;
        case 1: printf("ONE");  break;
        case 2: printf("TWO");  break;
        case 3: printf("THREE");    break;
        case 4: printf("FOUR"); break;
        case 5: printf("FIVE"); break;
        default: printf("IN-VALID NUMBER"); break;
    }
    getch();
}