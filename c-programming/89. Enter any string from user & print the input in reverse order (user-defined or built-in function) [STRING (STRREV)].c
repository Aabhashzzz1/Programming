#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i;
    char a[1000];
    printf("Enter any string to print reverse of it - ");
    gets(a);
    printf("Print the input in reverse order - ");
    for(i = (strlen(a)-1);i>=0;i--)
    {
        printf("%c",a[i]);
    }
    /** BUILT-IN FUNCTION (STRREV)
        printf("\nReverse order of string is ");
        puts(strrev(a));
    */
    getch();
}