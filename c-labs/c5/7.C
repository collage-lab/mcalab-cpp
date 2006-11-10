#include <stdio.h>
#include <conio.h>
#include<math.h>
main()
{
int no,i;
float ele[20],sum=0,summ=0,tem,sd,mean;
clrscr();
printf("Enter the no of elements\n ");
scanf("%d",&no);
printf("Enter the elements\n ");
for (i=0;i<=no-1;i++)
{
scanf("%f",&ele[i]);
sum=sum+ele[i];
}
mean=sum/no;
for (i=0;i<=(no-1);i++)
{
tem=ele[i]-mean;
summ=summ+(tem*tem);
}
sd=sqrt(summ/no);
printf(" \n\n\naverage ==  %f\nsum==%f\nstandard deviation==%f ",mean,sum,sd);
getch();
return(0);
}
