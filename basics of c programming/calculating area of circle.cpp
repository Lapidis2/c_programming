#include<stdio.h> //c program that calculate the area of a circle using constants
#define pi 3.14
#include<math.h>
main()
{float r,area;
printf(" please enter radius of circle");
scanf("%f",&r);
area=pi*pow(r,2);
printf("the area of circle is %f",area);


}
