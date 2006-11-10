
// ******** 11_7.C sum of ASCI **************

#include<stdio.h>
#include<conio.h>
int sum();
void dis();
main()
{
char *p;
char st[100];
int i=0,s;
clrscr();
p=&st;
printf("Enter ten strings");
for(i=0;i<10;i++)
{
while(*(p-1)!='\n')
{
scanf("%c",p);
p++;
}//end of while
p++;
}//end of for
s=sum(st);
dis(s);
getch();
return(0);
}//end of main

//******* sum *******

int sum(char *p1)
{
int i=0,S ;

for(i=0;i<10;i++)
{
while(*(p1-1)!='\n')
{
S=S+*p1;
p1++;
}//end of while
p1++;
}//end of for
return(S);
}//end of function sum

//****** function display *********

void dis(int Sum)
{
printf("ASCI sum of ten strings is >>%d",Sum);
}//end of dis function

