#include<stdio.h>
#include<conio.h>
void main()
{
    int a[1000],n,i;
    printf("Enter number of elements - ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter element at %d position - ",i);
        scanf("%d",&a[i]);
    }
    printf("You have entered %d number of elements - \n",n);
    for(i=n;i>=1;i--)
    {
        printf("%d\n",a[i]);
    }
    getch();
}