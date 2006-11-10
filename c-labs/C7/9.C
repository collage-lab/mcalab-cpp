//selection sorting
#include<stdio.h>
#include<conio.h>
main()
{
int i=0,j=0;
int num[40];
int no,tem;
clrscr();
printf("Enter the how many numbers ");
scanf("%d",&no);
printf("enter the numbers");
i=0;
while(i<no)
{
scanf("%d",&num[i]);
i++;
}
for(i=0;i<=no-1;i++)
{
for(j=i+1;j<=no;j++)
{
if(num[i]<=num[j])
{
tem=num[j];
num[j]=num[i];
num[i]=tem;
}
}
}
printf("sorted order is");
for(i=0;i<no;i++)
printf("\t%d",num[i]);
getch();
return(0);
}