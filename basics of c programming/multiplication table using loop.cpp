#include<stdio.h> //program to display multiplication table of a given number entered by a user
main()
{ int n,i;    //declaration of the variables 
printf("enter number to find its multiplication table\n");
scanf("%d",&n);
printf("the multiplication table of %d is \n",n);
for(i=1;i<=10;i++)
{printf("%d*%d=%d \n",n,i,n*i);
}
}
