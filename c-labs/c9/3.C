#include <stdio.h>
#include <conio.h>
//int isp();
main()
{
int prm,num;
clrscr();
printf("Enter the number :>");
scanf("%d",&num);
prm=isp(num);
if(prm==1)
printf(" %d is a prime number",num);
else
printf("%d is not a prime number",num);
getch();
return(0);
}

int isp(int numb)
{
int i=2,fact,flag=0;
while(i<=numb/2)
{
flag=1;
fact=numb%i;
if(fact==0)
{
flag=0;
break;
}
i++;
}
return(flag);
}