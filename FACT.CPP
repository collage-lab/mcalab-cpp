#include<iostream.h>
#include<conio.h>

long int fact(int k)
{
 if(k==0)
 return 1;
 else
 return k*fact(k-1);
}

void main()
{
 int e;
 clrscr();
 cout<<"Number:_";
 cin>>e;
 cout<<"Factorial is "<<fact(e);
 getch();
}