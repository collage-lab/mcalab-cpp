#include <stdio.h>
#include <conio.h>
main()
{
int num,fact,ll,Ul,sum=0,no,fsum=0;
clrscr();
printf("Enter thelower limit and upper limit ");
scanf("%d%d",&ll,&Ul);
printf("Enter diviscer ");
scanf("%d",&no);
printf(" from %d to %d  is divisible by  %d is",ll,Ul,no);
while(ll<Ul)
{
fact=ll%no;
if(fact==0)
{
printf("\t%d",ll);
sum=sum+ll;
fsum=fsum+1;
}
ll++;
}
if (fsum==0)
printf("no number");
else
printf("\nsum  =  % d",sum);
getch();
return(0);
}
