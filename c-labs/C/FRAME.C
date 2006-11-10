#include <stdio.h>
#include <conio.h>
main()
{
int num,i=0,fact,flag=0;
float;
clrscr();
printf("Enter the number ");
scanf("%d",&num);
while(num>=0)
{
fact=num%i;
if(fact==0)
{
flag=1;
break;
}
if(i==num)
break;
i++;
}
if(flag!=0)
{
printf("The number %d is aperfect number",num);
}
if(flag==0)
{
printf("The number %d is aperfect number",num);
}
getch();
return(0);
}
