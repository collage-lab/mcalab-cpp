#include<iostream.h>
#include<conio.h>

class abc
{
 int book,price;
 public:
 void readd();
 int write();
 void write(int k);
};

void abc::readd()
{
 cout<<"enter book:->";
 cin>>book;
 cout<<endl<<"enter price:->";
 cin>>price;
}

void abc::write(int k)
{
 cout<<endl<<"k is "<<k;
}


int abc::write()
{
 cout<<endl<<"Book and price is: "<<book<<","<<price;
 return price;
}

void main()
{
 clrscr();
 abc dx;
 dx.readd();
 dx.write();
 dx.write(dx.write());
 getch();
}