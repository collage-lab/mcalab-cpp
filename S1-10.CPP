#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
 double a;
 clrscr();
 cout<<"Enter the side length of cube:";
 cin>>a;
 a=pow(a,3);
 a=.75*a;
 a=a/3.14;
 a=pow(a,.333333);
 cout<<"\n\nRadius of sphere:- "<<a;
 getch();
}