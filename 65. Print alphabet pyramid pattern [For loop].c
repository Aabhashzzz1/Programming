/** Pyramid using FOR LOOP
    ABCDE   
    ABCD
    ABC
    AB
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
            printf("%c",j);
        }
        printf("\n");
    }
    getch();
}