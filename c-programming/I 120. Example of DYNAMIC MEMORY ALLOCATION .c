#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,*p;
    printf("Enter size of array in dynamic memory allocation - ");
    scanf("%d",&n);
    p = (int *)malloc(sizeof(int)*n); // creating array using pointer [DYNAMIC MEMORY ALLOCATION (MALLOC)]
    for(i=0;i<n;i++)
    {
        printf("Enter value at %d position - ",(i+1));
        scanf("%d",&p[i]);
    }
    printf("You have entered - \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",p[i]);
    }
    free(p);
    getch();
}