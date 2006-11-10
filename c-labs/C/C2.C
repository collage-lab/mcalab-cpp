//cos(x)
#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
float sum=1,fact=1,x;
int x1,k,i=2,r,l=1;
clrscr();
printf("Enter the value of (x): ");
scanf("%d",&x1);
x=x1*3.14/180;
//function
for(k=1;k<10;k++)
{
l=l*(-1);
fact=1;
for(r=1;r<=i;r++)
{
fact=fact*r;
}
sum=sum+(l*pow(x,i)/fact);
i=i+2;
}
printf("\ncos( %d ) = %f",x1,sum);
getch();
return(0);
}
