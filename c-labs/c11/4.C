
//				arry multyplicayion

#include<stdio.h>
#include<conio.h>
#include<math.h>
void mult();
void dis();
main()
{
	int ary[12],i,j;
	int no,con;
	int *p;
	clrscr();
	printf("Enter no of elements in arry>>");
	scanf("%d",&no);
	printf("Enter the arry..>>>");
	p=ary;
	for(i=0;i<no;i++)
	 {
		scanf("%d",p);
		p++;
	 }//end of for
	printf("enter a constant");
	scanf("%d",&con);
	mult(ary,no,con);
	dis(ary,no);
	getch();
	return(0);
}//end of main function


//mul function starts
void mult(int *p1,int n,int c)
{
	int i;
	for(i=0;i<n;i++,p1++)
		*p1=*p1*c;
}//ending mul function

void dis(int *p2,int n)
{
	int i;
	printf("new arry >>");
	for(i=0;i<n;i++,p2++)
printf(" %d  ",*p2);
}//end of function dis