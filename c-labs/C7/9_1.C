//binary searching
#include<stdio.h>
#include<conio.h>
main()
{
int i,j=0,flag=0,low=0;
int num[40];
int no,tem,mid,max,sear;
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
//printf("enter the element to search");
//scanf("%d",&sear);
printf("sorted order is");
for(i=0;i<no;i++)
printf("\t%d",num[i]);
/*low=0;
max=no-1;
i=0;
while((low!=max)&&(flag!=1))
{
mid=(low+max)/2;
if(num[mid]<sear)
low=mid;
else if(num[mid]>sear)
max=mid;
if(num[mid]=sear)
{
flag=1;
printf(" mid\  %d\nlow  %d\nmax  %d\nnum[mid]=%d",mid,low,max,num[mid]);
break;
}
printf(" mid\  %d\nlow  %d\nmax  %d\nnum[mid]=%d",mid,low,max,num[mid]);
i++;
}
if(flag==1)
printf(" %d is found",num[mid]);
else
printf(" %d is not found",num[mid]);*/
getch();
return(0);
}