#include <stdio.h>
#include <conio.h>
main()
{
int autom[10];
int num[10];
int k=0,flag=1,i=0,j=0;
int num,rim;
clrscr();
printf("\nenter the number") ;
scanf("%d",&num);
printf("\nrevers of the numberis") ;
while(num>0)
{
rim=num%10;
autom[i]=rim;
num[i]=rim;
num=num/10;
K++;
i++;
j++;
}
for(i=0,j=k;k=0:i++,j--)
{
if(autom[i]!=num[i])
{
flag=0;
break;
}
if(flag==1)
printf ("The given number is palindrome")
else
printf ("The given number isnot a palindrome")
getch();
return(0);
}