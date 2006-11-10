#include <stdio.h>
#include <conio.h>
main()
{
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
fsum=fsum+1;
break;
}

i++;
}
if (flag!=0)
printf("%d \t",num);
ll++;
}
if (fsum==0)
printf("null \t");
getch();
return(0);
}
