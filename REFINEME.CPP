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
   cout<<"\n pages ="<<pages<<"  price = "<<price;
  }

 class  cppbook:public book
   {
    int count;
    public:
	  void getdata();
	  void putdata();
   };
 /*--------------------------------------------------------------
   REFINEMENT TAKES PLACE IN THE CODE BELOW
   ------------------------------------------------------------*/
   void cppbook::getdata()
   {

    book::getdata();   //Function defined in the parent class
    cout<<"\n Enter book count;";//adding additional fetures in the child class
    cin>>count;
    }

    void cppbook::putdata()
    {
      book::putdata();     // Refinement of existing function
      cout<<"book count = "<<count;
    }

  int main()
  {
   clrscr();
   book b;
   cppbook c;

   b.getdata();
   b.putdata();

   c.getdata();
   c.putdata();
   b=c;
   cout<<"after assigning";
   b.putdata();
   getch();
   }
