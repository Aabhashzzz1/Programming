#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,n;
    char a[1000];
    printf("Enter number of string you want to print - ");
    scanf("%d",&n);
    printf("Enter string to print on console screen - ");
    // Method - 01
    for(i=0;i<n;i++)
    {
        a[i] = getche();
        if(a[i] == 13 || a[i] == 10)
        {
            a[i] = '\0';
            break;
        }
    }
    /** Method - 02
     i=0;
     while(a[i] != 0)
     {
          printf("%c",a[i]);
          i++;
     }
    */
    /** Method - 03 
        printf("Enter a string - ");
        scanf("%s",a);
        printf("%s",a);
    */
    /** Method - 04
        printf("Enter a string - ");
        gets(a);
        puts(a);
    */
    printf("\nYou have entered - ");
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
    getch();
}