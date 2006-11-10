#include <stdio.h>
#include <conio.h>
main()
{
int num[20];
int no,i,k,large,small;
float ppo;
clrscr();
printf("Enter the no of numbers\n ");
scanf("%d",&no);
printf("Enter the numbers\n ");
for (i=0,k=0;i<=(no-1);i++,k++)
{
scanf("%d",&num[i]);
}
large=num[0];
small=num[0];
for (i=0;i<k;i++)
{
if(num[i]>large)
{
large=num[i];
}
if(num[i]<small)
 {
small=num[i];
}
}
printf(" \n%d is the largest and  %d is the smallest ",large,small);
getch();
return(0);
}
