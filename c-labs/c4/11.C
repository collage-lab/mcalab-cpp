#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
unsigned int ele,sqr;
int num,rim=0,flag=0,i=1;
clrscr();
printf("\nenter the number") ;
scanf("%d",&num);
sqr=pow(num,2);
while(num>=rim)
{
ele=pow(10,i);
rim=sqr%ele;
if(rim==num)
{
flag=1;
break;
}
i++;
}
if(flag==1)
printf("The given number is an automorphic number");
else
printf("The given number is not an automorphic number");
getch();
return(0);
}