#include<iostream.h>
#include<conio.h>

class distance
{

 int m,cm;
 public :

	distance()
	{
	}
	distance(int x,int y);
	distance add(distance,distance);
	void show();
}

distance::distance(int x,int y)
{

 m=x;
 cm=y;

}


distance distance:: add(distance i,distance j)
{

 distance k;

 k.m=i.m+j.m;
 k.cm=i.cm+j.cm;

 return k;

}

void distance:: show()
{
 cout<<m;
 getch();
}

void main()
{
 clrscr();
 distance d1(10,5);
 distance d2(20,20);
 distance d3=d2.add(d1,d2);
 d3.show();
}