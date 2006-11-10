
// ******** 11_8.C string comparison **************

#include<stdio.h>
#include<conio.h>
int comp();
void dis();
main()
{
	char *p1,*p2;
	char st[10],st2[10];
	int op;
	clrscr();
	p1=&st;
	p2=&st2;
	printf("Enter two strings>> ");

//scaning string 1

	while(*(p1-1)!='\n')
	{
		scanf("%c",p1);
		p1++;
	}//end of while1
	*(p1-1)='\0';

//scaning string 2

	while(*(p2-1)!='\n')
	{
		scanf("%c",p2);
		p2++;
	}//end of while1
	*(p2-1)='\0';


	op=comp(st,st2);
	dis(op,&st,&st2);
	getch();
	return(0);
}//end of main

//******* comp *******

int comp(char *p1,char *p2)
{
	int com=0;
	while((*p1||*p2)!='\0')
	{
		com=0;
		if(*p1>*p2)
		{
			com=1;
			break;
		}//end of if
		else if(*p1<*p2)
		{
			com=2;
			break;
		}//end of elseif
		p1++;
		p2++;
	}//end of for

return(com);
}//end of function sum

//****** function display *********

void dis(int Com)
{

	if(Com==0)
		{
			printf("strings are equal");
		}//end of if
		else if(Com==1)
		{
			printf("second string is greater than first string");
		}//end of else if
		else if(Com==2)
		{
			printf("first string is smaller than second string");
		}//end of if
}//end of dis function

