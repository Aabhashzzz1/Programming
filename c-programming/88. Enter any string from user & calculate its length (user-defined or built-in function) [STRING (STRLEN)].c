#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i=0;
    char a[1000];
    printf("Enter any string to calculate its length - ");
    gets(a);
    while(a[i]!='\0')
    {
        i++;
    }
    printf("Total length of string is %d ",i);
    /** BUILT-IN FUNCTION (STRLEN)
        printf("Total length of string is %d ",strlen(a));
    */
    getch();
}