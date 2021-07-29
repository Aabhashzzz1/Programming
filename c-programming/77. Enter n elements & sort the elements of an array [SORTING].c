#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[1000],i,j,temp;
    printf("Enter number of elements - ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element at %d position - ",(i+1));
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    { 
        for(j=(i+1);j<n;j++)
        { 
            if(a[i]>a[j])
            {   
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted elements are - ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}