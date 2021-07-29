/** Pyramid using FOR LOOP
    EEEEE   
    DDDD
    CCC
    BB
    A
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=69;i>=65;i--)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    getch();
}