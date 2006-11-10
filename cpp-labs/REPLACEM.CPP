#include<iostream.h>
#include<conio.h>
class book
{
public:
	int pages;
	int price;
public :
	  void getdata();
	  void putdata();

};

 void  book::getdata()
  {
   cout<<"\n Enter pages and Price\n";
   cin>>pages>>price;
  }

 void book::putdata()
  {
   cout<<" pages = "<<pages<<"\n price ="<<price;
  }

  class  cppbook:public book
   {
    int count;

    public:
	  void getdata();
	  void putdata();
   };
 /*--------------------------------------------------------------
   REPLACEMENT TAKES PLACE IN THE CODE BELOW
   ------------------------------------------------------------*/
   void cppbook::getdata() // REPLACING EXISTING FUNCTION
   {
    cout<<"\n Enter page, price and count";
    cin>>pages>>price>>count;

    }

    void cppbook::putdata() //REPLACING EXISTING FUNCTION
    {
    cout<<"\n pages = "<<pages<<" price = "<<price<<" book count : "<<count;
    }

  void main()
  {
   clrscr();

   book b;
   cppbook c;

   b.getdata();
   b.putdata();

   c.getdata();
   c.putdata();

   b = c ;
   cout<<"\n After assigning :\n ";
   b.putdata();

   getch();

   }
