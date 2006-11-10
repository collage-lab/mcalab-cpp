#include <stdio.h>
#include <conio.h>
#include<math.h>
main()
{
int num,rim,sum=0,numb,cube;
clrscr();
printf("\nenter the number") ;
scanf("%d",&num);
numb=num;
while(num>0)
{
rim=num%10;
num=num/10;
cube=pow(rim,3);
sum=sum+cube;
}
if(sum==numb)
printf("The number %d is a armstrong number",numb);
else
printf("The number %d is not a armstrong number",numb);
getch();
return(0);
}