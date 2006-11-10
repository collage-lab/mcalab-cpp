#include<iostream.h>
#include<conio.h>
class time
{
	int hr,mm,ss;
	public:
		time()
		{
		}
		time(int x,int y,int z);
		time diff(time t1,time t2);
		void show();
};
time::time(int x,int y,int z)
{
	hr=x;
	mm=y;
	ss=z;
}
time time::diff(time t1,time t2)
{
	time t3;
	if(t1.hr>=t2.hr)
		t3.hr=t1.hr-t2.hr;
	else
		t3.hr=t2.hr-t1.hr;
	if(t1.mm>=t2.mm)
		t3.mm=t1.mm-t2.mm;
	else
		t3.mm=t2.mm-t1.mm;
	while(t3.mm>=60)
	{
		t3.hr=t3.hr+1;
		t3.mm=t3.mm-60;
	}
	if(t1.ss>=t2.ss)
		t3.ss=t1.ss-t2.ss;
	else
		t3.ss=t2.ss-t1.ss;
	while(t3.ss>=60)
	{
		t3.mm=t3.mm+1;
		t3.ss=t3.ss-60;
	}
	return(t3);
}
void time::show()
{
	cout<<"The difference in time is : ";
	cout<<hr<<":"<<mm<<":"<<ss;
}
void main()
{
	time t3;
	clrscr();
	time t1(8,65,65);
	time t2(6,2,5);
	t3=t3.diff(t1,t2);
	t3.show();
	getch();
}
