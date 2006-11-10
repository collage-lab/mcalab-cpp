//serch for string
#include <stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int i=0,no,flag=0,l=1;
char string1[15][20],cha[15];
clrscr();
printf ("Enter the no of string:>");
scanf("%d",&no);
printf("enter the string :>");
do
{
scanf("%s",&string1[i]);
i++;
}while(i-1!=' ');
printf("Enter the string  for serch");
scanf("%s",cha);
for(i=0;i<no;i++)
{
l=strcmp(string1[i],cha);
if(l==0)
{
flag=1;
break;
}
}
if(flag==1)
printf("\n%s is found",cha);
else
printf(" \n%s is is not found",cha);
getch();
return(0);
}