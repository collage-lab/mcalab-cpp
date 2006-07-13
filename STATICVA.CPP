#include<iostream.h>
#include<conio.h>

class dgh
{
 int a,b;
 static int c;
 public:
 static int gimme();
 void store()
 {
  a=10;
  b=20;
  c=30;
 }

};
int dgh::c;

int dgh::gimme()
{

 return c;

}

void main()
{
 clrscr();
 dgh dx;
 cout<<"c is "<<dx.gimme();
 dx.store();
 cout<<endl<<"c is "<<dx.gimme();

 getch();

}
