#include <stdio.h>
#include <conio.h>
main()
{
char name[20],ch;
int no,i=0,k=1,j;
clrscr();
printf("Enter the name\n ");
while(i<=10)
{
scanf("%c",&name[i]);
if(name[i]=='\n')
break;
i++;
}
while(k<=i)
{
printf("\n");
j=0;
while(j<=k-1)
{
printf("%c",name[j]);
j++;
}
k++;
}
getch();
return(0);
}
