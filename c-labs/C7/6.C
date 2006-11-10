#include <stdio.h>
#include <conio.h>
main()
{
float c[30],f[30];
int i,j,num;
clrscr();
printf("Enter the no of readings ");
scanf("%d",&num);
printf("Enter the readings ");
for(i=0;i<num;i++)
scanf("%f",&c[i]);
for(i=0;i<num;i++)
f[i]=(c[i]+32)*9/5;
printf("________________________________________\n");
printf("|     celsius      |    faheranheit    |\n");
printf("|__________________|___________________|\n");
for(i=0;i<num;i++)
{
printf("|     %6.3f       |       %6.3f      |\n",c[i],f[i]);
}
printf("|__________________|___________________|\n");
getch();
return(0);
}
