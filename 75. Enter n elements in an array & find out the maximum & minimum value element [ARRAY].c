#include<stdio.h>
#include<conio.h>
void main()
{
    int a[1000],n,i,max,min;
    printf("Enter number of elements - ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element at %d position - ",(i+1));
        scanf("%d",&a[i]);
    }
    max = a[0];
    min = a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    printf("Maximum value element - %d \n",max);
    for(i=0;i<=n;i++)
    {
        if(min>a[i])
        {
            min = a[i];
        }
    }
    printf("Maximum value element - %d ",min);
    getch();
}
