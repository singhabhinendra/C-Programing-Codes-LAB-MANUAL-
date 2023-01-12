//C program to check alphabet, digit or special character using Conditional operator
//C program to check alphabet, digit or special character using Conditional operator
#include<stdio.h>
int main()
{
char ch;
printf("Enter the character :");
scanf("%c",&ch);
(ch>='A'&& ch<='Z'|| ch>='a'&& ch<='z')?printf("Input is Alphabet"):printf("Input is Number");

return 0;
}