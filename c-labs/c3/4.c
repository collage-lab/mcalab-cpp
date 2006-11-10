
#include <stdio.h>
#include <conio.h>
main()
{
 float n1,n2;
 long float r=0.0;
 char c,op;
 clrscr();
 printf("Enter the 1st no and the 2nd no\n  ");
 scanf("%f%f",&n1,&n2);
 rep:
 printf("Enter any one of following operator\n\n \n\t+\t-\t*\t/\t");
 scanf(" %c",&op);
 clrscr ();
 switch(op)
 {
  case '+':r=n1+n2;break;
  case '-':r=n1-n2;break;
  case '*':r=n1*n2;break;
  case '/':
  if(n2!=0)
 r = n1 / (float) n2;break;
 default :
 printf ("error in the operator\n type once more");
 goto rep;
 }
 printf(" \n\n\n Result \t%f %c %f =  %9.2lf",n1,op,n2,r);
 getch();
 return(0);
}