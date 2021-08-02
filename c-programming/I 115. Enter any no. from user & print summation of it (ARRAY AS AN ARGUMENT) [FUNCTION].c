#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[1000];
    printf("Enter number of element - ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter value at %d position - ",(i+1));
        scanf("%d",&a[i]);
    }
    n = sum(a,n);
    getch();
}

void sum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    printf("Summation of all elements are - %d ",sum);
    return sum;
}