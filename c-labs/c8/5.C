//sort
#include <stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int i=0,j=0,no,l;
char string1[15][20],ch,temp[20];
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
//sorting
for(i=0;i<l;i++)
{
//printf("\n### %d ",i);
for(j=1;j<l;j++)
{
//printf("))) %d  ",j);
if(strcmp(string1[j-1],string1[j])>0)
{
printf("\n++S1 %s  S2 %s  I %d J %d+++",string1[j],string1[j-1],i,j);
strcpy(temp,string1[j-1]);
strcpy(string1[j-1],string1[j]);
strcpy(string1[j],temp);
}//if clo
printf("\nS1 %s  S2 %s  TEM %s I %d J %d",string1[j],string1[j-1],temp,i,j);
}//j-for clo
}//i-for clo
printf("scorted order is");
for(i=0;i<l;i++)
printf(" \n%s ",string1[i]);
getch();
return(0);
}