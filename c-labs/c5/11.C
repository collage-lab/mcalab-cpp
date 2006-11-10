#include <stdio.h>
#include <conio.h>
main()
{
int dec,rim,sum=0,i;
long int num,numb;
clrscr();
printf("Enter the binary no ");
scanf("%ld",&num);
numb=num;
for (i=1;num>0;i=i*2)
{
rim=num%10;
num=num/10;
dec=rim*i;
sum=sum+dec;
}
printf(" \n decimal equivalent of %ld is %d",numb,sum);

getch();
return(0);
}
