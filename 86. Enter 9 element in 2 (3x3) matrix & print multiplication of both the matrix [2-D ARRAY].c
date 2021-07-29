#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,a[3][3],b[3][3],c[3][3];
    printf("Enter 9 elements for matrics - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element at a[%d][%d] & b[%d][%d] - ",(i+1),(j+1),(i+1),(j+1));
            scanf("%d %d",&a[i][j],&b[i][j]);
        }
    }
    printf("MULTIPLICATION MATRICS - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = 0;
            for(k=0;k<3;k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    getch();
}