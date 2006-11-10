#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
 char a[100];
 int i;
 clrscr();
 cout<<"\n\nEnter String : -";
 cin>>a;
 cout<<"String with A's replaced with B is:-\n\n";
 for(i=0;i<=strlen(a);i++)
 {
  if(a[i]=='A')
  a[i]='B';
  cout<<a[i];
 }
 getch();
}