#include <stdio.h>
#include <conio.h>
main()
{
int binom,x,max,m;
clrscr();
printf(" Enter the limit :>");
scanf("%d",&m);
max=m-2;
do
{     //startof loop1
printf("%2d :>",m);
x=0;
binom=1;
while(x<=m)
{   //start of loop2
if((m==0)||(x==0))
printf("%4d ",binom);
else
{   //starting else
binom=binom*(m-x+1)/x;
printf("%4d ",binom);
}  //end of else
x++;
}
}//end ofloop2
while(m<=max);//end of loop 1
getch();
return(0);
}
