#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[1000],i,count=0,search;
    printf("Enter number of elements - ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elements at %d position - ",(i+1));
        scanf("%d",&a[i]);
    }
    printf("You have entered - { ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("}\n");
    printf("Enter element which count or frequency you want to find - ");
    scanf("%d",&search);
    printf("FREQUENCIES ARE - ");
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            count++;
            printf("%d ",i);
        }
    }
    if(count==0)
    {
        printf("ELEMENT NOT FOUND ");
    }
    else
    {
        printf("\nTOTAL COUNT - %d ",count);
    }
    getch();
}