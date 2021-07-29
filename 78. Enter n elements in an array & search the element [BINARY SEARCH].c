#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[1000],i,f=0,low,high,mid,search;
    printf("Enter number of element - ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element at %d position - ",(i+1));
        scanf("%d",&a[i]);
    }
    printf("Enter element which you want to search - ");
    scanf("%d",&search);
    low = 0;
    high = n;
    
    while(low<=high)
    {
        mid = (low + high)/2;
        if(a[mid]==search)
        {
            f = 1;
            break;
        }
        else if(search > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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