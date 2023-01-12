//C program to check whether a triangle is Equilateral, Isosceles or Scalene
//C program to check whether a triangle is Equilateral, Isosceles or Scalene

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter three side of triangle:");
    scanf("%d%d%d",&a,&b,&c);

    if(a!=b && a!=c && b!=c)
       printf("Triangle is Scalene");
       
       else if((a==b)&&(b==c)&&(c==a))
  printf("Triangle is Equilateral");

  
  else
      printf("Triangle is isosceles");

 return 0;  
}