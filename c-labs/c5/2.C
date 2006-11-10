#include <stdio.h>
#include <conio.h>
#include<math.h>
main()
{
int i=1,lim;
float fact=1;
clrscr();
printf("Enter the limit\n ");
scanf("%d",&lim);
while(i<=lim)
{
fact=fact*i;
i++;
}
printf ("factorrial of%d is %f",lim,fact);
getch();
return(0);
}
