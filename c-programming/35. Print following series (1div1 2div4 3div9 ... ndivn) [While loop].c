#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    printf("Enter any two number to print following series (1/1 2/4 3/9 ... n/n) \n");
    printf("Enter Starting Number - ");
    scanf("%d",&i);
    printf("Enter Ending Number - ");
    scanf("%d",&j);
    printf("You have entered number between %d and %d are - ",i,j);
    while(i<=j)
    {
        printf("%d/%d ",i,(i*i));
        i++;
    }
    getch();
}