#include <stdio.h>
#include <conio.h>
#include<math.h>
main()
{
int base, expon;
float ppo;
clrscr();
printf("Enter the number\n ");
scanf("%d",&base);
printf("Enter the power\n ");
scanf("%d",&expon);
ppo= pow(base, expon);
printf(" %d ^ %d = %f",base,expon,ppo);
getch();
return(0);
}
