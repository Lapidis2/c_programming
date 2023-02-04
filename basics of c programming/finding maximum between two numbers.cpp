#include<stdio.h>
int Max(int n1,int n2)
{ int result;
if(n1>n2)
{
result=n1;
        } 
		
	
		  else
{ result=n2;
	}
	 printf("the maximum is %d",result);
	
	return result;
}
main()
{
int a,b;
 printf("enter two numbers ");
 scanf("%d %d",&a,&b);
 Max(a,b);

}
