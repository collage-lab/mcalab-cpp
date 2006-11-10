//log(1+x)
#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
float sum=0,fact=1;
int x,k,i=1,r,l=(-1);
clrscr();
printf("Enter the value of (x): ");
scanf("%d",&x);
//function
for(k=1;k<3;k++)
{
l=l*(-1);
fact=1;
for(r=1;r<=i;r++)
{
fact=fact*r;
}
sum=sum+(l*pow(x,i)/fact);
printf("sum=%f\tpow=%.0f\tfact=%.0f\tl%d\t%f\n",sum,pow(x,i),fact,l,(l*pow(x,i)/fact));
i++;
}
printf("\log( %d ) = %f",x+1,sum);
getch();
return(0);
}
