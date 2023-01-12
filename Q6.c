//C program to calculate total, average and percentage and grades of five subjects
//C program to calculate total, average and percentage and grades of five subjects

#include<stdio.h>
int main()
{
   int a[5],total=0,avg,per;

    for(int i=1;i<=5;i++)
        {printf("Enter marks of %dth subject:",i);
        scanf("%d",&a[i]);}
   
    
   for(int i=1;i<=5;i++)
        total+=a[i];
     printf("\nTotal marks obtained :%d",total);

       avg=total/5;
       printf("\nAverage of marks :%d",avg);

         per=total/5;
       printf("\nPercentage of student :%d\n",per);

       if(per>=90&&per<=100)
       printf("Grade: A++");

        else if(per>=80&&per<90)
       printf("Grade: A");

       
        else if(per>=70&&per<80)
       printf("Grade: B++");

       
        else if(per>=60&&per<70)
       printf("Grade: B");

       else if(per>=50&&per<60)
       printf("Grade: C++");

       
       else if(per>=40&&per<50)
       printf("Grade: C");

       else if(per>=30&&per<40)
       printf("Grade: D++");

       else 
      printf("Fail!!Fail!!");

      return 0;
}



