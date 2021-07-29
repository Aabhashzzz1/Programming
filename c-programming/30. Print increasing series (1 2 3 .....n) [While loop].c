#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    printf("Enter any two number to print ascending/increasing series between them \n");
    printf("Enter Starting Number - ");
    scanf("%d",&i);
    printf("Enter Ending Number - ");
    scanf("%d",&j);
    printf("You have entered number between %d and %d are - ",i,j);
    while(i<=j)
    {
        printf("%d ",i);
        i++;
    }
    getch();
}
