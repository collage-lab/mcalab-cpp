#include<stdio.h>
#include<conio.h>
void main ()
{
int x,y,i,j,M,m,sum=0;
float avg;
clrscr();
printf("Enter the no of students and no of subject:");
scanf("%d%d",&y,&x);
for(i=1;i<=y;i++)
{
clrscr();
printf("\nstudent no%d\n\nEnter the marks of %d subject\n",i,x);
M=0;
for(j=1;j<=x;j++)
{
printf("\nEnter the marrks of subject #: %d \n",j);
scanf("%d",&m);
M=M+m;
}
sum=sum+M;
}
avg=sum/(x*y);
printf("\nAverage marks of%d student for %d subject:%f",y,x,avg);
getch();
}