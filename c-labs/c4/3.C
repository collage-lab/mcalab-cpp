#include <stdio.h>
#include <conio.h>
main()
{
int num,i=1,fact,flag=0;
clrscr();
printf("Enter the number ");
scanf("%d",&num);
while(i<=num/2)
{
fact=num%i;
if(fact==0)
{
flag=1;
break;
}
i++;
}
if (flag!=1)
printf("%d is a prime no",num);
else
printf("%d is not a prime no",num);
getch();
return(0);
}
