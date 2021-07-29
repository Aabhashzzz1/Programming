#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter 9 elements for matrics - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element at a[%d][%d] & b[%d][%d] - ",(i+1),(j+1),(i+1),(j+1));
            scanf("%d %d",&a[i][j],&b[i][j]);
        }
    }
    printf("SUMMATION OF MATRICES - \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    getch();
}