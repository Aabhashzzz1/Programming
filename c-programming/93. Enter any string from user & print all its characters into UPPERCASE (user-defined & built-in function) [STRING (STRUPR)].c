#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i;
    char a[1000];
    printf("Enter any string to print it into uppercase - ");
    gets(a);
    printf("After changed into uppercase string - ");
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
            printf("%c",(a[i]-32));
        }
        else
        {
            printf("%c",a[i]);
        }
    }
    /** BUILT-IN FUNCTION (STRUPR)
        puts(strupr(a));
    */
    getch();
}