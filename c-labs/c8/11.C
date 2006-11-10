
//count palindrome
#include <stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int i=0,count=0,no;
char line[15][15],string1[15],ser[15],rep[15];
clrscr();
printf("enter the no  string [max=15] :>");
scanf("%d",&no);
printf("enter the string :>");
for(i=0;i<no;i++)
scanf("%s",&line[i]);
printf("enter the string for serch:>");
scanf("%s",&ser);
printf("enter the string for replace:>");
scanf("%s",&rep);
for(i=0;i<no;i++)
{
if(strcmp(ser,line[i])==0)
{
printf("\n%s  **",line[i]);
strcpy(line[i],rep);
printf("  %s",line[i]);
count++;
}
}
if (count==0)
printf("%s not found",ser);
else
printf("printing new :>\n",ser);
for(i=0;i<no;i++)
printf(" %s \n",line[i]);
getch();
return(0);
}