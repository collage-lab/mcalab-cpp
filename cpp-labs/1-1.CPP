#include<iostream.h>
#include<conio.h>
#include<process.h>

class account
{
 char name[10],acctype[10];
 int accno,bal;
 public:
 void create();
 void deposit();
 void withdraw();
 void display();
};
void account::create()
{
 clrscr();
 cout<<"NAME : _";
 cin>>name;
 cout<<"\n\nACC.TYPE : _";
 cin>>acctype;
 cout<<"\n\nACC.NO. : _";
 cin>>accno;
 bal=0;
}
void account::deposit()
{
 int temp;
 clrscr();
 cout<<"AMOUNT : _";
 cin>>temp;
 bal=bal+temp;
}
void account::withdraw()
{
 int temp;
 clrscr();
 cout<<"AMOUNT : _";
 cin>>temp;
 bal=bal-temp;
}
void account::display()
{
 clrscr();
 cout<<"\n\nNAME : _ "<<name;
 cout<<"\n\nACC.TYPE : _ "<<acctype;
 cout<<"\n\nACC.NO : _ "<<accno;
 cout<<"\n\nBALANCE : _ "<<bal;
 getch();
}

void main()
{
 clrscr();
 account acc;
 char c;
 acc.create();
menu:
clrscr();
 cout<<"\n----BANK----";
 cout<<"\n\n<1>.DEPOSIT\n\n<2>.WITHDRAW\n\n<3>.DISPLAY\n\n<4>.EXIT";
 cout<<"\n\n------------";
 c=getch();
 if(c=='1')
 acc.deposit();
 else if(c=='2')
 acc.withdraw();
 else if(c=='3')
 acc.display();
 else if(c=='4')
 exit(0);
 goto menu;
}

