#include <stdio.h>
#include <conio.h>
main()
{
int i=1,lim,j=1;
float sum=1.0,fact=1.0;
clrscr();
printf("Enter the limit\n ");
scanf("%d",&lim);
while(j<=lim)
{
while(i<=j)
{
fact=fact*i;
i++;
}
sum=sum+(1/(float)fact);
j++;
}
printf("sum = %f ",sum);
getch();
return(0);
}
