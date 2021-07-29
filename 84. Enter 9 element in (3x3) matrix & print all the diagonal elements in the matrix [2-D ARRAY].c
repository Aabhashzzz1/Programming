#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[3][3];
    printf("Enter 9 elements for matrics - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element at a[%d][%d] - ",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("ALL DIAGONAL ELEMENTS IN THE MATRICS - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   
            printf(" ");
            if(i==j)
            {
                printf("%d",a[i][j]);
            }
        }
    }
    getch();
}