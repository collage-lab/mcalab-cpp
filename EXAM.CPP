#include<iostream.h>
#include<conio.h>
#include<math.h>
class distance
{
	int m,cm;
	public:
		void getdata()
		{
			cout<<"\nEnter the distance in metre and centimetre respectively: ";
			cin>>m>>cm;
		}
		void show(distance d3)
		{
			cout<<"------------------------------------------------";
			cout<<"\n          HYPOTENUSE CALCULATION OUTPUT";
			cout<<"\n-----------------------------------------------";

			cout<<"\nThe length of the 3rd side of the right angled triangle is: "<<d3.m<<" metre and "<<d3.cm<<" centimetres";
		}
		distance calc(distance x,distance y,distance z)
		{
			x.cm=x.cm+(x.m*100);
			y.cm=y.cm+(y.m*100);
			z.cm=sqrt(pow(x.cm,2)+pow(y.cm,2));
			z.m=0;
			while(z.cm>=100)
			{
				z.m=z.m+1;
				z.cm=z.cm-100;
			}
			return z;
		}
};
void main()
{
	distance d1,d2,d3;
	clrscr();
	cout<<"---------------------------------------------";
	cout<<"\n          HYPOTENUSE CALCULATION";
	cout<<"\n---------------------------------------------";
	d1.getdata();
	d2.getdata();
	d3=d3.calc(d1,d2,d3);
	d1.show(d3);
	getch();
}

