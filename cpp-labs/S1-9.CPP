#include<iostream.h>
#include<conio.h>

void main()
{
 int a,i,s=0;
 clrscr();
 for(i=0;i<5;i++)
 {
  cout<<"Enter Number["<<i<<"]:-";
  cin>>a;
  s=s+a;
 }
 cout<<"\n\nAverage is : "<<(s/5);
 getch();
}