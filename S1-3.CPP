#include<iostream.h>
#include<conio.h>

void main()
{
 int a,b,c,d;
 clrscr();

 cout<<"Number[1]:";
 cin>>a;
 cout<<"Number[2]:";
 cin>>b;
 cout<<"Number[3]:";
 cin>>c;

 clrscr();
 cout<<"Numbers: "<<a<<","<<b<<","<<c<<endl;
 cout<<"\n\nSum: "<<(a+b+c);
 d=(a+b+c)/3;
 cout<<"\n\nAvg: "<<d;
 cout<<"\n\nDeviations: "<<(d-a)<<","<<(d-b)<<","<<(d-c);
 if(a>=b && a>=c)
 d=a;
 else if(b>=a && b>=c)
 d=b;
 else
 d=c;
 cout<<"\n\nBiggest: "<<d;
 if(a<=b && a<=c)
 d=a;
 else if(b<=a && b<=c)
 d=b;
 else
 d=c;
 cout<<"\n\nSmallest: "<<d;

 getch();
}
