#include <stdio.h>
#include <conio.h>
main()
{
int no,i=1,j;
clrscr();
printf("Enter the limit\n ");
scanf("%d",&no);
while(i<=no)
{
printf("\n");
j=i;
while(j>=1)
{
printf("%d ",j);
j--;
}
i++;
}
getch();
return(0);
}
