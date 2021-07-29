#include<stdio.h>
#include<conio.h>
void main()
{
    int a[1000],n,i,sum=0;
    printf("Enter number of elements - ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter element at %d position - ",i);
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("Summation of all the elements in array - %d",sum);
    getch();
}