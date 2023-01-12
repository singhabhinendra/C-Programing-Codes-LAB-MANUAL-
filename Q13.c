//C program to check vowel or consonant using switch case.
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter the Character:");
    scanf("%c",&ch);

    switch (ch)
    {
    case'A':
    case'a':
    case'E':
    case'e':
    case'I':
    case'i':
    case'O':
    case'o':
    case'U':        
    case'u':
        printf("%c is vowel",ch);
        break;
    
    default:
      printf("%c is Consonant",ch);
    }
      return 0;
    }