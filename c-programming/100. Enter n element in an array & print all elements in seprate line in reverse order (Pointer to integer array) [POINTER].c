#include<stdio.h>
#include<conio.h>
void main()
{
    int a[1000],n,i,*p;
    p=&a[0];
    printf("Enter number of elements - ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter element at %d position - ",i);
        scanf("%d",p);
        p++;
    }
    p=&a[n-1];
    printf("You have entered %d number of elements - \n",n);
    for(i=n;i>0;i--)
    {
        printf("%d\n",*p);
        *p--;
    }
    getch();
}
