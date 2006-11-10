
//read name in up case,count no of ch
#include <stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int i,len;
char name[15],c;
clrscr();
printf("enter your name :>");
scanf("%s",name);
printf("enter U to print in Upper case or L for printing in lower case");
c=getche();
switch (c)
{
//printing in upper case
case 'u': case'U':
printf("\nName in upper case is :> %s",strupr(name));
break;
//printing in lower  case
case 'l': case 'L':
printf("\nName in lower case is :> %s",strlwr(name));
break;
default:         printf("Bug!\n");
}
//counting char
len=strlen(name);
printf("\nno of characters Your name is:> %d",len);
getch();
return(0);
}