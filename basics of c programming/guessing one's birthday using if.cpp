#include<stdio.h>     //this is a programm to guess someone birth day by entering his or her choice
main()
{int birthday=13;
printf("please enter my birth day between 1 and 31");
scanf("%d",&birthday);
if(birthday==13)
{printf(" oooh my gosh!  great! you are right this is my birthday");
}
else if(birthday>31)
{printf("ooh no! you are outof range");                       // checking for outof range
}
else if(birthday>13)
{printf("the number you entered is above my birth day ,try again!");
}
else if(birthday<13&&birthday>0)
{printf("the number entered is below my birthday, try again!");
}
else
{
    printf("incorrect input");
}
}
