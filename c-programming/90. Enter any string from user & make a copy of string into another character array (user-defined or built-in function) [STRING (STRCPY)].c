#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i;
    char a[1000],b[1000];
    printf("Enter any string to make a copy of string from one to another - ");
    gets(a);
    for(i=0;i<=strlen(a);i++)
    {
        b[i] = a[i];
    }
    printf("Print copy from one to another - \n");
    puts(a);
    printf("Print copied string - ");
    puts(b);
    /** BUILT-IN FUNCTION (STRCPY)
        printf("\nPrint copy from one to another - ");
        puts(strcpy(a,b));
    */
    getch();
}