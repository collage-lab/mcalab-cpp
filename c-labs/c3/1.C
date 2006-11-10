#include <stdio.h>
#include <conio.h>
main()
{
int num;
//char uname[20];
//float net,RS;
clrscr();
printf("Enter the number:");
scanf("%d",&num);
if(num<0)
{
printf("entered number is -ive");
}
else if(num>=0)
{
printf("entered number is +ive");
}
else
{
printf("bug!");
}
getch();
return(0);
}