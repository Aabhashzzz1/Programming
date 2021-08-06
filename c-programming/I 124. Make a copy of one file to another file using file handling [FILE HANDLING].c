#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    char ch;
    FILE *copy,*paste;
    char copy_file[] = "file_handling_copy.txt";
    char paste_file[] = "file_handling_paste.txt"; 

    copy = fopen(copy_file,"r");
    if(copy == NULL)
    {
        printf("Press any key to exit..\n");
        exit(EXIT_FAILURE);
    }

    paste = fopen(paste_file,"w");
    if(paste == NULL)
    {
        fclose(copy);
        printf("Press any key to exit..\n");
        exit(EXIT_FAILURE);
    }

    while((ch-fgetc(paste))!=EOF)
        fputc(ch,paste);
    
    printf("File copied successfully. \n");
    fclose(copy);
    fclose(paste);

    getch();
}

