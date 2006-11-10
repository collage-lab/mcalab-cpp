//triangle
#include<stdio.h>
#include<conio.h>
#include<math.h>
float area();
int pari();
void menu();
void main()
{
char opp;
int a,b,c;
clrscr();
printf("enter the values of sides ");
scanf("%d%d%d",&a,&b,&c);
printf("enter the A for area P for paremeter:>   ");
opp= getche();
menu(a,b,c,opp);
getch();
}
//menu
void menu(int am,int bm,int cm,char opper)
{
switch(opper)
{
case 'A': case 'a': printf("\narea of the given triangle is %f", area(am,bm,cm)); break;
case 'P': case 'p': printf("\nPrerimeter of the given triangle is %d", peri(am,bm,cm)); break;
defalt: printf("BUG!!!");
}
}
//area
float area(int A,int B,int C)
{
float are,s;
s=((float)A+B+C)/2;
are=s*(s-A)*(s-B)*(s-C);
printf("\n%f  %f  %d  %d  %d",are,s,A,B,C);
return(are);
}
//peri
int peri(int ap,int bp,int cp)
{
int p;
p=ap+bp+cp;
return(p);
}

