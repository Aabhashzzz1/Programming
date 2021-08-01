#include<stdio.h>
#include<conio.h>
void main()
{
    char a[1000],*p;
    p=&a[0];
    printf("Enter any string - ");
    gets(p);
    while(*p!='\0')         //--------
    {                       // /** for replacing while loop , we can use puts() */
        printf("%c",*p);    // puts(p);
        p++;                //
    }                       //--------
    getch();
}