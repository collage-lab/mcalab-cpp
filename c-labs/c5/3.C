#include <stdio.h>
#include <conio.h>
main()
{
int i=1,lim,fact=1;
float sqr;
clrscr();
printf("Enter the limit\n ");
scanf("%d",&lim);
printf("the factorial of %d natural numbers is",lim);
while(i<=lim)
{
fact=fact*i;
printf("%d   ",fact);
i++;
}
getch();
return(0);
}
