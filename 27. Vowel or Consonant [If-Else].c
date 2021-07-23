#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter an alphabet to check whether it is Vowel or Consonant - ");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        printf("VOWEL ");
    }
    else
    {
        printf("CONSONANT ");
    }
    getch();
}