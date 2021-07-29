/** Pyramid using FOR LOOP
    AAAAA   
    BBBB
    CCC
    DD
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
            printf("%c",i);
        }
        printf("\n");
    }
    getch();
}