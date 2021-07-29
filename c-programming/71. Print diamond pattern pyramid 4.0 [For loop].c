/** Pyramid using FOR LOOP
        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n;
    printf("Enter any number to print Diamond pattern - ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=(n-i);k++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=(n-1);i++)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*(n-i)-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}