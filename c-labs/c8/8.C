
//count palindrome
#include <stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int i=0,count=0,no;
char line[15][15],string1[15],string2[15];
clrscr();
printf("enter the no  string [max=15] :>");
scanf("%d",&no);
printf("enter the string :>");
for(i=0;i<no;i++)
scanf("%s",&line[i]);
for(i=0;i<no;i++)
{
strcpy(string1,line[i]);
strrev(string1);
if(strcmp(string1,line[i])==0)
count++;
}
if (count==0)
printf(" No palindrome found");
else
printf(" Number of palindrome found is :>%d",count);
getch();
return(0);
}