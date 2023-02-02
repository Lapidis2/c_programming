#include<stdio.h>

void sum();
   main()
{ printf("the sum of two numbers \n");
sum();


}
 void sum()
{int a,b;
printf("enter two numbers");
scanf("%d %d",&a,&b);
printf("the sum of %d and %d is %d",a,b,a+b);
}
