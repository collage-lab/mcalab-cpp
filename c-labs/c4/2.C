#include <stdio.h>
#include <conio.h>
main()
{
float net,tax;
char uname[20];
clrscr();
printf("ENTER THE NAME ") ;
scanf("%s",&uname);
printf("\nenter the net pay:") ;
scanf("%f",&net);
if(net>100000)
{
if(net<=300000)
tax=0.05*net;
else if(net<=500000)
tax=0.065*net;
else if(net>=500001)
tax=0.1*net;
else
printf("bug!");
printf("%s has to pay rs%7.2f as incom tax",uname,tax);
}
else
{
printf("%s has no need of paying incom tax",uname);
}
getch();
return(0);
}