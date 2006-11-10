//palaindrome
#include <stdio.h>
#include <conio.h>
#include <math.h>
int palain();
main()
{
int numb,pala;
clrscr();
printf("\nenter the number") ;
scanf("%d",&numb);
pala=palain(numb);
if(pala==numb)
printf("\n%d number is a palindrome number",numb);
else
printf("\n%d number is not a palindrome  number");
getch();
return 0;
}
palain(int num)
{
int rim,pal=0.1;
while(num>0)
{
rim=num%10;
pal=(pal*10)+rim;
num=num/10;
}
return(pal);
}