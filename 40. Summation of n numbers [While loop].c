#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,sum=0;
    printf("Enter any two number for summation of n numbers \n");
    printf("Enter Starting Number - ");
    scanf("%d",&i);
    printf("Enter Ending Number - ");
    scanf("%d",&j);
    while(i<=j)
    {
        sum = sum + i;
        i++;
    }
    printf("Summation of %d numbers = %d",j,sum);
    getch();
}
