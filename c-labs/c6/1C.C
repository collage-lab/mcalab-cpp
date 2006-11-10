#include <stdio.h>
#include <conio.h>
main()
{
int no,i=1,j,num;
clrscr();
printf("Enter the limit\n ");
scanf("%d",&no);
while(i<=no)
{
printf("\n");
num=no;
j=1;
while(j<=i)
{
printf("%d ",num);
num=num-1;
j++;
}
i++;
}
getch();
return(0);
}
