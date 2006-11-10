#include<stdio.h>
#include<conio.h>
main()
{
int i,count=0;
char line[40];
clrscr();

printf("Enter the line of text\n ");
scanf("%[^\n]s",line);
for(i=0;line[i]!='\0';i++)
{
if(line[i]!=' ')
count++;
}
printf("\nNo of character in the line of text is %d ",count);
getch();
return(0);
}