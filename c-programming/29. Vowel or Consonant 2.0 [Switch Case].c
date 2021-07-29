#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter an alphabet to check whether it is Vowel or Consonant - ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': printf("VOWEL"); break;

        default: printf("CONSONANT");
    }
    getch();
}