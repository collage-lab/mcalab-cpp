//distance struct
#include<stdio.h>
#include<conio.h>
#include<string.h>
void enter();
void add();
void dis();
struct distance
{
int inches,feet,toinc,tofeet;
}dist[2];
main()
{
clrscr();
enter();
add();
dis();
getch();
return 0;
}
//entering  values;
void enter()
{
clrscr();
printf("Enter the  distance 1   [feet +enter,inches+enter] >");
scanf("%d%d",&dist[0].feet,&dist[0].inches);
printf("Enter the  distance 2   [feet +enter,inches+enter] >");
scanf("%d%d",&dist[1].feet,&dist[1].inches);
printf("Enter the mark of sub 1of stud %d  :>");
}
//ADD
void add()
{
int sumi;
sumi=dist[0].inches+dist[1].inches;
if(sumi>11)
{
dist[0].toinc=sumi-12;
dist[0].tofeet=dist[0].feet+dist[1].feet+1;
}
else
{
dist[0].toinc=sumi;
dist[0].tofeet=dist[0].feet+dist[1].feet;
}
}
// disp
void dis()
{
clrscr();
printf("\n%d %d + %d  %d = %d  %d ",dist[0].feet,dist[0].inches,dist[1].feet,dist[1].inches ,dist[0].tofeet,dist[0].toinc);
}