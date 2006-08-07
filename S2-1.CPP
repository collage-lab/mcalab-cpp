#include<iostream.h>
#include<conio.h>

void main()
{
 int i,j,n,k=-1;
 clrscr();
 cout<<"Number of lines to be printed:-";
 cin>>n;
 clrscr();
 for(i=0;i<n;i++)
 {
  cout<<"1";

  for(j=1;j<=k;j++)
  {
   cout<<" 0";
  }
  k=k+2;
  if(i>0)
  cout<<" 1";
  cout<<"\n";
 }
 getch();

}