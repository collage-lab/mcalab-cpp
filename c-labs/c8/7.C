//line count
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int i=0,count=0;
char line[25];
clrscr();
printf("Enter the line of text");
scanf("%[^'\n']s",line);
while(line[i]!='\n')
{
if((line[i-1]==' ')&&(line[i]!=' '))
{
count++;
printf("%c ",line[i]);
}
i++;
}
printf("no of words in the line of text is:> %d",count);
getch();
return(0);
}