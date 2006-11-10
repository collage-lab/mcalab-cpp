
//search for string
#include <stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int i=0,no,flag=0,l;
char string1[15][20],string2[20];
clrscr();
printf ("Enter the no of string:>");
scanf("%d",&no);
printf("enter the string :>");
do
{
scanf("%s",&string1[i]);
i++;
}while(i<no);
l=no;
printf("Enter the string for serch");
scanf("%s",string2);
for(i=0;i<l;i++)
{
if(strcmp(string1[i],string2)==0)
{
printf("\n%s is found",string1[i]);
flag=1;
break;
}
if (flag==1)
break;
}
if (flag==0)
printf(" \n%s is is not found",string2);
getch();
return(0);
}