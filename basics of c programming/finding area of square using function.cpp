#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{float a, b,c,root1,root2,D,real,img;
printf("enter coefficients a,b and c\n");
scanf("%f %f %f",&a,&b,&c);
printf("calculate discriminant \n");
D=b*b-4*a*c;
printf("the discriminant is %f \n ",D);
if(D>0)
{root1=(-b+sqrt(D))/2*a;
root2=(-b+sqrt(D))/2*a;
printf("the roots are %f and %f",root1,root2);
}
else if(D==0)
{root1=root2=-b/2*a;
printf("the roots are %f and %f",root1,root2);
}
else
{D<0;
real=-b/2*a;
img=sqrt(-D)/2*a;

printf("the roots are %f+%fi and %f-%fi ",real,img,real,img);
}






}
