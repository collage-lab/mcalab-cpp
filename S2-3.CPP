#include<iostream.h>
#include<conio.h>

void main()
{
 int n,sum=0,i,t;
 clrscr();
 cout<<"Count: ";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cout<<"Number ["<<i<<"]:-";
  cin>>t;
  sum=sum+t;
 }
 clrscr();

 cout<<"\n\nAverage is : "<<(float)sum/n;
 getch();
}