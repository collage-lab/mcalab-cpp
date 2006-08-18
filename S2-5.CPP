#include<iostream.h>
#include<conio.h>
#include<math.h>

void main()
{
 int i,n;
 double sum=0,t;
 clrscr();
 cout<<"\n\nEnter the count:-";
 cin>>n;

 for(i=1;i<=n;i++)
 {
   cout<<"Number ["<<i<<"]:-";
   cin>>t;
   sum=sum+pow(t,2);
 }
 clrscr();
 cout<<"\n\nSum of squares upto "<<n<<" is "<<sum;
 getch();
}