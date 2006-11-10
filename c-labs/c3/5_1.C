#include <stdio.h>
#include <conio.h>
main()
{
float U,net ;
char uname[20];
clrscr();
printf("Enter username\t") ;
scanf("%s",&uname);
printf("Enter theunit consumed\t") ;
scanf("%f",&U);
if(U<=50)
{
net=U;
}
if ((U<=150)&&(U>=51))
{
net=50+(U-50)*2;
}
if ((U<=200)&&(U>=151))
{
net=250+(U-150)*2.5;
}
if (U>=201)
{
net=375+(U-200)*3;
}
printf("%s has to pay Rs %7.2f",uname,net);
getch();
return(0);
}