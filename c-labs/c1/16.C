#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{

float D,u,t,a;
clrscr();
printf("Enter u , t & a:\n");
scanf("%f",&u);
printf("M/Sec\n");;
scanf("%f",&t) ;
printf(" Sec\n");
scanf("%f",&a);
printf("M/ Sec^2\n");
D=(u*t)+(a*pow(t,2))/2;
printf("\nDstance= %e  M",D);
getch();
}