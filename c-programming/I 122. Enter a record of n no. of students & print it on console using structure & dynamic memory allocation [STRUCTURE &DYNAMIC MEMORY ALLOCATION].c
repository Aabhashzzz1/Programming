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

struct student *stu;
void main()
{
    int n,i;

    printf("Enter number of students - ");
    scanf("%d",&n);

    stu = (struct student *)malloc(sizeof(struct student)*n);

    for(i=0;i<n;i++)
    {
        printf("%d. student number - \n",(i+1));
        printf("Enter NAME of student - ");
        gets(stu[i].fname);
        gets(stu[i].lname);
        printf("Enter EMAIL ADDRESS of student - ");
        gets(stu[i].email);
        printf("Enter ENROLLMENT NUMBER of student - ");
        gets(stu[i].enroll);
        printf("Enter BRANCH of student - ");
        gets(stu[i].branch);
        printf("Enter SECTION of student - ");
        gets(stu[i].sec);
        printf("Enter CGPA of student - ");
        scanf("%f",&stu[i].cgpa);
        printf("Enter SEMESTER of student - ");
        scanf("%d",&stu[i].sem);
        printf("Enter YEAR of student - ");
        scanf("%d",&stu[i].year);
        printf("\n\n");
    }
    
    
    printf("\n \nStudent details which you have entered - \n\n");
    printf("\t NAME \t\t\t  EMAIL \t\t  ENROLLMENT NO. \tBRANCH SECTION  CGPA   SEMESTER  YEAR \n");
    
    for(i=0;i<n;i++)
    {
        printf("%s %s \t %s \t %s \t %s \t %s\t%.3f  \t %d \t %d \n",stu[i].fname,stu[i].lname,stu[i].email,stu[i].enroll,stu[i].branch,stu[i].sec,stu[i].cgpa,stu[i].sem,stu[i].year);
    }

    free(stu);
    getch();
}

void linkfloat()
{

}