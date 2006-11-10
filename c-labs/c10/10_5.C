//baby struct
#include<stdio.h>
#include<conio.h>
#include<string.h>
int enter();
void computing();
void dis();
struct day
{
int day,mon,year;
}date;
struct baby_data
{
char name[20];
int doby,dobm,dobd,bcgd,bcgm,bcgy,polid,polim,poliy;
}baby[20];
main()
{
int n;
clrscr();
n=enter();
computing(n);
dis(n);
getch();
return 0;
}
//entering  values;
int enter()
{
int no,i;
clrscr();
printf("Enter the current date");
printf("\nyear>");
scanf("%d",&date.year);
printf("month>");
scanf("%d",&date.mon);
printf("day>");
scanf("%d",&date.day);
printf("enter the no of babys");
scanf("%d",&no);
no=2;
for(i=0;i<no;i++)
{
clrscr();
printf("Enter the  name of the baby >");
scanf("%s",&baby[i].name);
printf("Enter the  date of birth>\nday>");
scanf("%d",&baby[i].dobd);
printf("month>");
scanf("%d",&baby[i].dobm);
printf("year>");
scanf("%d",&baby[i].doby);
}
return(no);
}
//computing
void computing(int no)
{
int i;
//bcg
for(i=0;i<no;i++)
{
baby[i].bcgd=baby[i].dobd;
baby[i].bcgm=baby[i].dobm+3;
if(baby[i].bcgm>12)
{
baby[i].bcgm=baby[i].bcgm-11;
baby[i].bcgy=baby[i].doby+1;
}
else
{
baby[i].bcgy=baby[i].doby;
}
}
//polio
for(i=0;i<no;i++)
{
baby[i].polid=baby[i].dobd;
baby[i].polim=baby[i].dobm+6;
baby[i].poliy=baby[i].doby+1;
if(baby[i].polim>12)
{
baby[i].polim=baby[i].polim-11;
baby[i].bcgy=baby[i].doby+1;
}
}
}
// display
void dis(int no)
{
int i;
clrscr();
printf("list>>>>>>");
for(i=0;i<no;i++)
printf("\nname:>  %s  dob:> %d - %d -%d  bcg date:>%d - %d -%d polio date:> %d - %d -%d ",baby[i].name,baby[i].dobd,baby[i].dobm,baby[i].doby,baby[i].bcgd,baby[i].bcgm,baby[i].bcgy,baby[i].polid,baby[i].polim,baby[i].poliy);
}