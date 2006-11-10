//sin(x)
#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
float powe;
float sum=1,fact=1,x,po=1;
int j=2,i=1,l=1;
clrscr();
printf("Enter the value of (x): ");
scanf("%f",&x);
//function
while(po>0)
{
l=l*-1;
powe=pow(x,j);
//factorial
fact=1;
while(i<=j)
{
fact=fact*i;
i++;
}
po=-l*(powe/fact);
sum=sum+po;
printf("\npowe=%f\tfact=%f\tsum==%f\tl=%d\tpo%f",powe,fact,sum,l,po);
j++;
}
po=x+1;
printf("\nlog( %f ) = %f",po,sum);
getch();
return(0);
}
