#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[1000],b[1000],i,j;
    
    printf("Enter 1st string - ");
    scanf("%s",a);
    printf("Enter 2nd string - ");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++);
    {
        for(j=0;b[j]!='\0';j++,i++)
        {
            a[i] = b[j];
            
        }
        a[i] = '\0';
        printf("Concatenated string  is %s ",a);
    }
    /** BUILT-IN FUNCTION (STRCAT)
        puts(strcat(a,b));
    */
    getch();
}