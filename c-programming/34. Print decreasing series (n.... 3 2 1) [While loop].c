#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    printf("Enter any two number to print descending/decreasing series between them \n");
    printf("Enter Starting Number - ");
    scanf("%d",&i);
    printf("Enter Ending Number - ");
    scanf("%d",&j);
    printf("You have entered number between %d and %d are - ",i,j);
    /*while(i>=j) //for entering value 100 and 1 out 100 99 98 ... 3 2 1
    {
        printf("%d ",i);
        i--;
    }*/
    while(i<=j) //for entering value 1 and 100 out 100 99 98 ... 3 2 1
    {
        printf("%d ",(i+j)-(2*i-1));
        i++;
    }
    getch();
}