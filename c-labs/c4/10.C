#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
int num,rim,pal=.1,numb;
clrscr();
printf("\nenter the number") ;
scanf("%d",&num);
numb=num;
while(num>0)
{
rim=num%10;
pal=(pal*10)+rim;
num=num/10;
}
if(pal==numb)
printf("The given number is a palindrome number");
else
printf("The given number is not a palindrome  number");
getch();
return(0);
}