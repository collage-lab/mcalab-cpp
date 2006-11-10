#include <stdio.h>
#include <conio.h>
#include<math.h>
main()
{
int limit,i,tnum=0;
clrscr();
printf("\nenter the limit" ) ;
scanf("%d",&limit);
printf("\ntriangular numbers are :\n");
for (i=1; i<=limit; i++)
{
tnum=tnum+i;
printf("%d\t",tnum);
}
getch();
return(0);
}