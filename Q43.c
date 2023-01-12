//All operation of string
//All operationo of string

#include<stdio.h>
#include<string.h>
int main()
{

    char a[100],b[100];

    printf("Enter string a:");
    gets(a);
    
    printf("Enter string b:");
    gets(b);

    printf("%s\n",strcat(a,b));
    printf("Length of string is :%d\n",strcmp(b,a));
    printf("Copingy string a to b:%s\n",strcpy(b,a)); 
    printf("Length of string b:%d \n",strlen(b));
    printf("Length of string a:%d \n",strlen(a));
    printf("Converting into lower case: %s\n",strlwr(b));
    printf("Converting into upper case:%s",strupr(b));
    printf("Reversing  a:%s\n",strrev(a));
    




}