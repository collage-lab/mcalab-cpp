#include <stdio.h>
#include <conio.h>
void main()
{
float h ,net;
char name[20];
clrscr();
printf("Enter employes name:") ;
scanf("%s",&name);
printf("\nEnter the hours worked:") ;
scanf("%f",&h);
if(h<=160)
{
net=150.0*h;
}
else if (h>=160)
{
net=((h-160)*200)+24000;
}
else
{
printf("bug!");
}
printf("The net earnings of%s is :%7.2f Rs",name,net);
getch();
}