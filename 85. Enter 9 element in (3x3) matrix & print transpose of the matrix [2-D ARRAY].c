#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[3][3],transpose[3][3];
    printf("Enter 9 elements for matrics - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element at a[%d][%d] - ",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("NON-TRANSPOSE MATRICS - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("TRANSPOSE MATRICS - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   
            transpose[j][i] = a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    getch();
}