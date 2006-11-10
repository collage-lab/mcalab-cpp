#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
float H,P,D,W;
clrscr();
printf("Enter the hours worked,pay rate  &  days work:");
scanf("%f%f%f",&H,&P,&D);
W=H*P*D;
printf("Net amount=Rs",W)
getch ();
}