#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,even=0;
    printf("Summation of all Even numbers \n");
    printf("Enter Starting Number - ");
    scanf("%d",&i);
    printf("Enter Ending Number - ");
    scanf("%d",&j);
    while(i<=j)
    {
        if(i%2==0)
        {
            even = even + i;
        }
        i++;
    }
    printf("Summation of all even number -  %d\n",even);
    getch();
}
