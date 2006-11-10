#include <stdio.h>
#include <conio.h>
void main()
{
float W,H;
clrscr();
printf("Enter the weight & height:") ;
scanf("%f%f",&W,&H);
if ((W>60)&&(H<5))
printf("\"OVER WEIGHT\"");
else if((W<40)&&(H>4))
printf("\"UNDER WEIGHT\"");
else
printf("\"NORMAL WEIGHT\".");
getch();
}