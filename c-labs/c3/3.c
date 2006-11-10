#include <stdio.h>
#include <conio.h>
void main()
{
int A;
char N[20],G;
clrscr();
printf("ENTER THE NAME ") ;
scanf("%s",&N);
printf("\nENTER THE MARK") ;
scanf("%f",&A);
if (A>=80)
{
G='A';
}
else if((A>=70)&&(A<=80))
{
G='B';
}
else if((A>=60)&&(A<=70))
{
G='C';
}
else if((A>=50)&&(A<=60))
{
G='D';
}
else if(A<50)
{
printf("Failed") ;
}
else
{
printf("invalued marks");
}
if(A>=50)
printf("%s has passed withn %c Grade",N,G);
getch();
}