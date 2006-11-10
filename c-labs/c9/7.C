//triangle
#include<stdio.h>
#include<conio.h>
void fib();
void main()
{
char opp;
int lim,j=-1,fib=0;
clrscr();
printf("enter the limit:> ");
scanf("%d%d%d",&lim);
fib(j,fib,lim);
getch();
}

//fib
int fib(int i,int fibe,int n)
{
i++;
if(i<=n)
{
printf("%d\t",fib);
fibe=fibe+fib(i,fib,n);
}
else
return(0);
}

