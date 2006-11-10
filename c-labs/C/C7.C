#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
int ele[20];
int i=1;
float sum=1 ,var,std;
clrscr();
printf("Enter the limit\n ");
scanf("%d",&lim);
while(i<=lim)
{
sum=sum+i;
i++;
}
printf("sum of %d natural numbers is %d ",lim,sum);
getch();
return(0);
}
