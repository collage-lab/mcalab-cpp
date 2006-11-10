#include <stdio.h>
#include <conio.h>
main()
{
int n,i,j,x;
clrscr();
printf("enter the limit");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=n;j++)
{
x=i*j;
printf("%d\t",x);
}
}
getch();
return(0);
}
