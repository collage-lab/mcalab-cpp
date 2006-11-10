#include <stdio.h>
#include <conio.h>
void main()
{
int num,i=1,fact;
clrscr();
printf("Enter the number ");
scanf("%d",&num);
printf("\n The factors are\n ");
while(i<=num/2)
{
fact=num%i;
if(fact==0)
{
printf ("%d\t",i);
}
i++;
}
printf("%d",num);
getch();
//return(0);
}
