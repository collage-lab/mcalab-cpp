#include <stdio.h>
#include <conio.h>
void main()
{
int slab,i=0;
int week[4];
float com,netcom;
char usname[15];
clrscr();
printf("Enter username") ;
scanf("%s",&usname[15]);
printf("\nEnter the weekly sales of each week") ;
for (i=0;i<=3;i++)
{
scanf("%d",&week[i]);
}
for (i=0; i<4; i++)
{
if(week[i]<=5000)
{
slab=week[i]/1000;
com=slab*20.0 ;
}
else if((week[i]<=8000)&&(week[i]>=5001))
{
slab=week[i]/1000;
com=slab*25.0 ;
}
else if(week[i]>=8001)
{
slab=week[i]/1000;
com=slab*30;
}
else
{
printf("Bug!!");
}
netcom=netcom+com;
}
printf("\nNet commision for%s is Rs%f",usname,netcom);
getch();
}