#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j;
    printf("Enter 9 elements for matrics - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element at a[%d][%d] - ",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("You have entered elements for matrics are - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    getch();
}