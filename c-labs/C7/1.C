#include <stdio.h>
#include<conio.h>
main()
{
int num[10];
int i=0;
clrscr();
printf("enter nthe numbers");
for(i=0;i<10;i++)
scanf("%d",&num[i]);
clrscr();
delay(1700);
printf("\nprinting in same order \n");
for(i=0;i<10;i++)
{
delay(1700);
printf("\t%d",num[i]);
}
delay(1700);
clrscr();
printf("\nprinting in revers order\n");
for(i=i-1;i>=0;i--)
{
delay(1700);
printf("\t%d",num[i]);
}
getch();
return(0);
}