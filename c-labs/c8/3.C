//ch string
#include <stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int i=0,no;
char string1[15],ch;
clrscr();
printf("enter the string:>");
scanf("%s",&string1);
printf("enter the limit:>");
scanf("%d",&no);
for(i=0;i<no;i++)
printf("%c",string1[i]);
getch();
return(0);
}