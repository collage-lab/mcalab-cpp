#include <stdio.h>
#include <conio.h>
main()
{
char name[20],ch;
int no,i=0,k=0,j;
clrscr();
printf("Enter the name\n ");
while(i<=20)
{
scanf("%c",&name[i]);
if(name[i]=='\n')
break;
i++;
}
//function
while(k<i)
{
printf("\n");
j=0;
while(j<(i-k))
{
printf("%c",name[j]);
j++;
}
k++;
}
getch();
return(0);
}
