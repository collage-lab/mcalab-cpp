#include <stdio.h>
#include <conio.h>
main()
{
int num,rim;
clrscr();
printf("\nenter the number") ;
scanf("%d",&num);
printf("\nrevers of the numberis") ;
while(num>=0)
{
rim=num%10;
printf("%d",rim);
num=num/10.0;
if(num==0)
break;
}
getch();
return(0);
}