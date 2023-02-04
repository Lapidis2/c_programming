# include<stdio.h>
main()
{int marks;
char grade;
printf("please enter the marks of student\n");
scanf("%d",&marks);
if(marks>=80)
{printf("the student has grade A");
}
else if( marks>=70)
{
	printf("grade B");
	
}
else if(marks>=60)
{printf("grade C");
}
else
{
   printf("	unclassified"); 	}	
}
