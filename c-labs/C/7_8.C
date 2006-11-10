//bubble sorting
#include<stdio.h>
#include<conio.h>
main()
{
int i=0,no,j=0;
int num[40],tem;
clrscr();
printf("Enter the how many numbers ");
scanf("%d",&no);
printf("enter the numbers");
while(i<no)
{
scanf("%d",num[i]);
i++;
}
i=0;
while(i<no)
{
for(j=0;j<no-2;j++)
{
if(num[j]<num[j+1])
{
tem=num[j];
num[j]=num[j+1];
num[j+1]=tem;
}
i++;
}
}
delay(1700);
clrscr();
printf("sorted order is");
for(i=0;i<no;i++)
printf("%d",num[i]);
getch();
return(0);
}