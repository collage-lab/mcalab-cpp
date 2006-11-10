
//no of occurrences
#include <stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int i=0,count=0,no;
char line[15][15],string1[15],ser[15];
clrscr();
printf("enter the no  string [max=15] :>");
scanf("%d",&no);
printf("enter the string :>");
for(i=0;i<no;i++)
scanf("%s",&line[i]);
printf("enter the string for serch:>");
scanf("%s",&ser);
for(i=0;i<no;i++)
{
if(strcmp(ser,line[i])==0)
count++;
}
if (count==0)
printf("%s not found",ser);
else
printf(" %s is found %d times ",ser,count);
getch();
return(0);
}