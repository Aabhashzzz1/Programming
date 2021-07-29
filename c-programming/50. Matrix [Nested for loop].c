/**     Matrix using Nested FOR LOOP    
       11  12  13
       21  22  23
       31  32  33
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d%d \t",i,j);
        }
        printf("\n");
    }
    getch();
}