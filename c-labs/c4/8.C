#include <stdio.h>
#include <conio.h>
main()
{
int num,rim,sum=0,numb;
clrscr();
printf("\nenter the number") ;
scanf("%d",&num);
numb=num;
while(num!=0)
{
rim=num%10;
num=num/10;
sum=sum+rim;
}
if((sum==1)||(sum==10)||(sum==19))
printf("The number %d is a magig number",numb);
else
printf("The number %d is not a magig number",numb);
getch();
return(0);
}