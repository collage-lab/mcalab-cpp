#include <stdio.h>
#include <conio.h>
void main()
{
int U ;
char uname[20];
float net,RS;
clrscr();
printf("Enter username") ;
scanf("%s",&uname);
printf("Enter the unit consumed") ;
scanf("%d",&U);
if(U<50)
{
RS=1.0*U;
}
else if ((U<=150)&&(U>=51))
{
RS=2.0;
}
else if ((U<=200)&&(U>=151))
{
RS=2.5;
}
else if (U>=201)
{
RS=3.0;
}
else
{
printf("invalued amount");
}
net=U*RS;
printf("%s has to pay Rs %6.2f",uname,net);
getch();
}