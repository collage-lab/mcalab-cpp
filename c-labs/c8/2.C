
//palindrome
#include <stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int i=0,len,flag=0;
char name[15],string1[15],string2[15];
clrscr();
printf("enter the string :>");
do
{
scanf("%c",&name[i]);
if (name[i]=='\n')
break;
i++;
}while(name[i-1]!='\n');
len=i-1;
for(i=0;len>=0;i++,len--)
{
string1[i]=name[i];
string2[i]=name[len];
}
string1[i]='\0';
string2[i]='\0';
flag=strcmp(string1,string2);
if (flag==0)
printf(" %s is palindrome",string1);
else
printf(" %s is not palindrome",string1);
getch();
return(0);
}