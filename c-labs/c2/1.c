#include <stdio.h>
#include <conio.h>
void main()
{
int num ,rim;
clrscr();
printf("Enter the number") ;
scanf("%d",&num);
rim= (num%2);
 if (rim==1)
printf("%d is a odd number",num);
else if(rim==0)
printf("%d is an  even number",num);
else
printf("%d is devalued number",num);
getch();
}