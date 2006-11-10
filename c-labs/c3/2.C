#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
int A,B,C ;
float D,X,x;
clrscr();
printf("Enter the Values of a ");
scanf("%d%d%d",&A,&B,&C);
if(A!=0)
{
D=pow(B,2)-(4*A*C);
if(D==0)
{
X=(-B)/(2*A);
printf("The Roots are real and equal and is%f ",X);
}
else if(D>0)
{
X=((-B)+sqrt(D))/(2*A);
x=((-B)-sqrt(D))/(2*A);
printf("The Roots are real and are:%f & %f",X,x);
}
else if(D<0)
{
D=abs(D);
X=-B/2*A;
x=sqrt(D)/2*A;
printf("The Roots are complex and are %f + %fi & %f- %fi ",X,x,X,x);
}
}
else
{
printf("entered is not a  quadratic equation");
}
getch();
return(0);

}
