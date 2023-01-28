#include<stdio.h> //program to find sum and average of student marks
main()
{char name;

float math,chemistry,physic,sum=0,average;
printf("ERIC\n");
printf("enter marks of physics");
scanf("%f",&physic);
printf("enter math marks");
scanf("%f",&math);
printf("enter chemistry marks");
scanf("%f",&chemistry);
sum = physic+math+chemistry;
printf("the sum of his marks is %f+%f+%f=%f",physic,math,chemistry,sum);
printf("\n\n");
average=sum/3;
printf ("the averade is %f",average);
}
