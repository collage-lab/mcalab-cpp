#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
int year,leap,leap1;
float;
clrscr();
printf("Enter the year ");
scanf("%d",&year);
leap=year%100;
if(leap==0)
{
leap=year%400;
if(leap==0)
printf("The year %d is a leap year",year);
else
printf("The year %d is not a leap year",year);
}
else
{
leap=year%4;
if(leap==0)
printf("The year %d is a leap year",year);
else
printf("The year %d is not a leap year",year);
}
getch();
return(0);

}
