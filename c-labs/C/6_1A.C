#include <stdio.h>
#include <conio.h>
main()
{
int no,i,j;
clrscr();
printf("Enter the limit\n ");
scanf("%d",&no);
for (i=1;i>no;i++)
{
printf("\n");
for (j=1;i>i;j++)
{
printf("%d",j);
}
if(i==no)
break;
}
getch();
return(0);
}
