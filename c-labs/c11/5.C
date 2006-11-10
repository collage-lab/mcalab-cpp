
//			   11_5 number

#include<stdio.h>
#include<conio.h>
#include<math.h>
void comp();
void dis();
main()
{
	int com[5],ary[10];
	int i,j;
	int no,con;
	int *pa;
	clrscr();
	printf("Enter how many numbers>>");
	scanf("%d",&no);
	printf("Enter the arry..>>>");
	pa=ary;

	for(i=0;i<no;i++)
	 {
		scanf("%d",pa);
		pa++;
	 }//end of for

	printf("enter a constant");
	scanf("%d",&con);

	comp(ary,com,no,con);
	dis(com,con);
	getch();
	return(0);
}//end of main function

//  ***********comp function starts************

void comp(int *p,int *po,int n,int c)
{
	int i;//arry[20],outp[3];
	//&arry=p1;
	//&outp=p2;
	int *ps=0,*pe=0,*pg=0;
	ps=po;
	pe=po+1;
	pg=po+2;
	*ps=0,*pe=0,*pg=0;

	for(i=0;i<n;i++,p++)
	{
		if(*p<c)
			*ps=*ps+1;
		else if(*p>c)
			*pg=*pg+1;
		else
			*pe=*pe+1;
	}//end of for statement
}//ending mul function
//	**********display********
void dis(int *p,int c)
{
	printf("there are %d elements less ",*p);
	p++;
	printf("%d elements  equall ",*p);
	p++;
	printf(" and %d elements greater than %d",*p,c);
}//end of function dis