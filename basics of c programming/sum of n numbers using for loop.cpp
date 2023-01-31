#include<stdio.h> //finding sum of n numbers using for loop
main()
{int i,n,sum=0;
printf("please enter the limit of the numbers you want to add \n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("the sum of %d numbers is %d",n,sum);





}
