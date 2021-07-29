/** Pyramid using FOR LOOP
    EDCBA   
    EDCB
    EDC
    ED
    E
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=69;j>=i;j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    getch();
}