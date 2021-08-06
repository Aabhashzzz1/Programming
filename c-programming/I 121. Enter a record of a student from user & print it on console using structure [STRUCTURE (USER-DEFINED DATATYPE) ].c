#include<stdio.h>
#include<conio.h>

struct student
{
    char fname[20];
    char lname[20];
    char email[50];
    char enroll[50];
    char branch[30];
    char sec[10];
    float cgpa;
    int sem;
    int year;
};

struct student stu;
void main()
{
    printf("Enter FIRST NAME of student - ");
    gets(stu.fname);
    printf("Enter LAST NAME of student - ");
    gets(stu.lname);
    printf("Enter EMAIL ADDRESS of student - ");
    gets(stu.email);
    printf("Enter ENROLLMENT NUMBER of student - ");
    gets(stu.enroll);
    printf("Enter BRANCH of student - ");
    gets(stu.branch);
    printf("Enter SECTION of student - ");
    gets(stu.sec);
    printf("Enter CGPA of student - ");
    scanf("%f",&stu.cgpa);
    printf("Enter SEMESTER of student - ");
    scanf("%d",&stu.sem);
    printf("Enter YEAR of student - ");
    scanf("%d",&stu.year);
    
    printf("\n \nStudent details which you have entered - \n");
    printf("NAME - %s %s \n",stu.fname,stu.lname);
    printf("EMAIL - %s \n",stu.email);
    printf("ENROLLMENT NUMBER - %s \n",stu.enroll);
    printf("BRANCH - %s \n",stu.branch);
    printf("SECTION - %s \n",stu.sec);
    printf("CGPA - %.3f \n",stu.cgpa);
    printf("SEMESTER - %d \n",stu.sem);
    printf("YEAR - %d \n",stu.year);
    

    getch();
}

void linkfloat()
{

}