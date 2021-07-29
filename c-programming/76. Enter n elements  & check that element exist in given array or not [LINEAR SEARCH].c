#include<stdio.h>
#include<conio.h>
void main()
{
    int n,exist,a[1000],i,f=0;
    printf("Enter number of elements - ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element at %d position ",(i+1));
        scanf("%d",&a[i]);
    }
    printf("Enter number to check whether it exist or not - ");
    scanf("%d",&exist);
    for(i=0;i<n;i++)
    {
        if(a[i]==exist)
        {
            f=1;
            break;
        }
        
    }
    if(f==1)
    {
        printf("ELEMENT FOUND ");
    }
    else
    {
        printf("ELEMENT NOT FOUND ");
    }
    getch();
}