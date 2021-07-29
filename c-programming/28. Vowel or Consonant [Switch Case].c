#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter an alphabet to check whether it is Vowel or Consonant - ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a': printf("VOWEL"); break;
        case 'A': printf("VOWEL"); break;

        case 'e': printf("VOWEL"); break;
        case 'E': printf("VOWEL"); break;
        
        case 'i': printf("VOWEL"); break;
        case 'I': printf("VOWEL"); break;
        
        case 'o': printf("VOWEL"); break;
        case 'O': printf("VOWEL"); break;
        
        case 'u': printf("VOWEL"); break;
        case 'U': printf("VOWEL"); break;
        
        default: printf("CONSONANT"); break;
    }
    getch();
}