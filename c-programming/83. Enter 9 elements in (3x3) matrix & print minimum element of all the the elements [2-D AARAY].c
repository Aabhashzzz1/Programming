#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a[3][3],min;
    printf("Enter 9 elements for matrics - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element at a[%d][%d] - ",(i+1),(j+1));
            scanf("%d",&a[i][j]);
        }
    }
    printf("MINIMUM AMOUNG ALL ELEMENTS IN MATRICS - ");
    min = a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(min>a[i][j])
            {
                min = a[i][j];
            }
        }
    }
    printf("%d",min);
    getch();
}