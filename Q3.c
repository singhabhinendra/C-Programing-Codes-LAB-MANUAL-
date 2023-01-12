//C program to find all angles of a triangle if two angles are given.
//C program to find all angles of a triangle if two angles are given.


#include<stdio.h>
int main()
{
      int a1,a2,a3; //a1,a1,a3 are angles
      printf("Enter the angle a1:");
      scanf("%d",&a1);
      printf("Enter the angle a2:");
      scanf("%d",&a2);

      a3=180-(a1+a2);
      printf("Angle a3 is: %d",a3);

      return 0;
}
