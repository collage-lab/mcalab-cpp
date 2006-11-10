#include <stdio.h>
#include <conio.h>
main()
{
float A,Net,Dis,DIS ;
clrscr();
printf("Enter theamount of purchase:::") ;
scanf("%f",&A);
if(A<=100)
{
Dis=0.05;
}
else if ((A<=200)&&(A>=101))
{
Dis=0.075;
}
else if ((A<=300)&&(A>=201))
{
Dis=0.1;
}
else if (A>=301)
{
Dis=0.15;
}
else
{
printf("BUG!");
}
DIS=A*Dis;
Net= A-DIS;
printf("The net amount :%7.2f Rs\ndiscount:%5.2f",Net,DIS);
getch();
return(0);
}