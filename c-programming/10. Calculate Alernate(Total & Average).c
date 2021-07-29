#include<stdio.h>
#include<conio.h>
void main()
{
    int h,e,m,s,total;
    float avg;
    printf("ENTER MARKS OF HINNDI , ENGLISH , MATHS AND SCIENCE : ");
    scanf("%d %d %d %d",&h,&e,&m,&s);
    total = h+e+m+s;
    printf("TOTAL MARKS : %d \n",total);
    avg = total/4.0;
    printf("AVERAGE MARKS : %2f \n",avg);
    getch();
}
