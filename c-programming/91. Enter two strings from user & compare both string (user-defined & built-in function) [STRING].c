#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,f=0;
    char a[1000],b[1000];
    printf("Enter 1st string - ");
    gets(a);
    printf("Enter 2nd string - ");
    gets(b);
    if(strlen(a) != strlen(b))
    {
        f=1;
    }
    else
    {
        for(i=0;i< strlen(a);i++)
        {
            if(a[i]!=b[i])
            {
                f=1;
                break;
            }
        }
    }
    if(f==0)
    {
        printf("THE STRINGS YOU HAVE ENTERED ARE SAME ");
    }
    else
    {
        printf("THE STRINGS YOU HAVE ENTERED ARE DIFFERENT ");
    }
    /** BUILT-IN FUNCTION (STRCMP & STRCMPI)
        f = strcmp(a,b);  //CASE-SENSITIVE
        f = strcmpi(a,b); //NON-CASE-SENSITIVE
        if(j==0)
        {
            printf("THE STRINGS YOU HAVE ENTERED ARE SAME ");
        }
        else
        {
            printf("THE STRINGS YOU HAVE ENTERED ARE DIFFERENT ");
        }
    */
    getch();
}