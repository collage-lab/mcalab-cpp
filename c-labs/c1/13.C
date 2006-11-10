#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{

float B,D,H,C,P,L,N;
clrscr();
printf("Enter Basic salary:");
scanf("%f",&B);
D=0.20*B;
H=0.05*B;
C=0.04*B;
P=0.07*B;
L=0.01*B;
N=B+D+H+C-P-L;
printf("\nNet salary: %f  Rs",N);
getch();
}