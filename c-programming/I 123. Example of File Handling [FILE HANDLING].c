/** 
    IMPORTANT FILE MODES -
    write mode = w 
    read mode = r
    append mode = a (it is used to write on created file after it finished or it can also create a file )

*/

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    FILE *f=NULL;

    // write a file
    f = fopen("student.txt","w");       // for append mode use "a"
    if(f==NULL)
        printf("FILE NOT CREATED");
    else
    {
        printf("Enter strings , press ""$"" to quit \n");
        do 
        {
            ch = getchar();
            if(ch!='$')
                fputc(ch,f);
        }
        while(ch!='$');

        fclose(f);
    }

    //read a file
    f = fopen("student.txt","r");
    if(f==NULL)
        printf("FILE NOT FOUND");
    else
    {
        do 
        {
            ch = fgetc(f);
            if(ch!=EOF)
                printf("%c",ch);
        }
        while(ch!=EOF);

        fclose(f);
    }

    getch();
}