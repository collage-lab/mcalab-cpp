#include <stdio.h>
#include <conio.h>
#include<math.h>
main()
{
int num[20];
int no,i,k,serc,flag=0;
float ppo;
clrscr();
printf("Enter how many  numbers\n ");
scanf("%d",&no);
printf("Enter the numbers\n ");
for (i=0,k=0;i<=(no-1);i++,k++)
{
scanf("%d",&num[i]);
}
printf("enter the number for scerch");
scanf("%d",&serc);

for (i=0;i<k;i++)
{
if(num[i]==serc)
{
flag=1;
break;
}
if(flag==1)
break;
}
if (flag==1)
printf("\n%d is found",serc);
else
printf(" \n%d not found",serc
);
getch();
return(0);
}
