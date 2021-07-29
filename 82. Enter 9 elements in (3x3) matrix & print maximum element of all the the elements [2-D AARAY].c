#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a[3][3],max;
    printf("Enter 9 elements for matrics - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element at a[%d][%d] - ",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("MAXIMUM AMOUNG ALL ELEMENTS IN MATRICS - \n");
    max = a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(max<a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    printf("%d",max);
    getch();
}