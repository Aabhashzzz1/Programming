#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i;
    char a[1000];
    printf("Enter any string to print it into lowercase - ");
    gets(a);
    printf("After changed into lowercase string - ");
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            printf("%c",(a[i]+32));
        }
        else
        {
            printf("%c",a[i]);
        }
    }
    /** BUILT-IN FUNCTION (STRLWR)
        puts(strlwr(a));
    */
    getch();
}