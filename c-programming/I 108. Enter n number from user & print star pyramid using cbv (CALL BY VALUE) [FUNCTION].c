#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter number of element for * pyramid using call by value - ");
    scanf("%d",&n);
    pyramid(n);
    getch();
}

void pyramid(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}