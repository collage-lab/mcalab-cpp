 //coping two strings
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int i=0;
char s1[' '],s2[' '],s3[' '];
char *p1,*p2,*p3;
clrscr();
printf("Enter first string  >>>>>>");
scanf("%s",&s1);
printf("Enter second string >>>>>>");
scanf("%s",&s2);
p1=s1;
p3=s3;
while(s1[i]!='\n')
{
*p3=*p1;
i++;
p1++;
p3++;
}//end of while statement

while(s2[i]!='\n')
{
*p3=*p2;
p3++;
p2++;
i++;
}//end of while statement
printf(" new string>>>%s ",s3);
getch();
return(0);
}