#include<stdio.h>
#include<conio.h>
void main()
{
    int h,e,m,s,total;
    float avg; // h = hindi ,e = english ,m = maths ,s = science
    printf("ENTER HINDI MARKS : ");
    scanf("%d",&h);
    printf("ENTER ENGLISH MARKS : ");
    scanf("%d",&e);
    printf("ENTER MATHS MARKS : ");
    scanf("%d",&m);
    printf("ENTER SCIENCE MARKS : ");
    scanf("%d",&s);
    total = h+e+m+s;
    printf("TOTAL MARKS OF %d , %d , %d AND %d = %d \n",h,e,m,s,total);
    avg = total/4.0;
    printf("AVERAGE OF %d , %d , %d AND %d = %2f",h,e,m,s,avg);
    getch();
}
