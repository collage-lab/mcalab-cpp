#include <stdio.h>
#include <conio.h>
main()
{
int num,i=1,fact,sum=0;
clrscr();
printf("Enter the number\n ");
scanf("%d",&num);
while(i<=num/2)
{
fact=num%i;
if(fact==0)
{
sum=sum+i;
}
i++;
}
if(sum==num)
printf("%d is a perfect number",num);
else
printf("%d is not a perfect number",num);
getch();
return(0);
}
