#include <stdio.h>
#include <conio.h>
#include<math.h>
main()
{
int i=0,lim,sum=0;
float sqr;
clrscr();
printf("Enter the limit\n ");
scanf("%d",&lim);
printf("fibinacci series up to %d is\t",lim);

while(i<=lim)
{
sum=sum+i;
printf("%d\t",sum);
i++;
}
getch();
return(0);
}
