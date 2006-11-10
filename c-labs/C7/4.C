#include <stdio.h>
#include <conio.h>
main()
{
int prm[30],j=0,k;
int num,i=2,fact,ll,ul,flag=1,fsum=0;
clrscr();
printf("Enter thelower limit and upper limit ");
scanf("%d%d",&ll,&ul);
printf("prime numbers from %d to %d ",ll,ul);
while(ll<ul)
{
num=ll;
flag=1;
while(i<=num/2)
{
fact=num%i;
if(fact==0)
{
flag=0;
flag=fsum+flag;
break;
}
i++;
}
if (flag!=0)
{
prm[j]=num;
j++;
}
ll++;
}
for(k=0;k<=j-1;k++)
printf("  %d",prm[k]);
getch();
return(0);
}
