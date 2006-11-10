
//			     10_account number

#include<stdio.h>
#include<conio.h>
#include<math.h>

char process();
void display();
void newacc();
void depo();
void widr();
void bala();

struct account
{
	int ac,amt;
	char name[15];
}acinfo[20],*p;
int acc=0;

//******************************************************************************


main()
{
	char stop='y';
	while(stop==('y'||'Y'))
	{
		stop=process();
	}//end of while
getch();
return(0);
}//end of main function


//******************************************************************************


// function process

char process()
{
	char stp='n';
	int op,acno;
	clrscr();
	printf("Enter \n  1  for  New account\n2  for deposit\n3  for widrovel\n5 for balance \n\n\n");
	scanf("%d",&op);
      if(op!=1)
	{
		printf("Enter the account no >> ");
		scanf("%d",&acno);
		switch(op)
		{

			case 2: depo(&acinfo[acno]);
			break;

			case 3: widr(&acinfo[acno]);
			break;

			case 4: bala(&acinfo[acno]);
			break;

			default:printf("ERROR\n");


		}//end of switch
	}//end of if
	else
	{   
	newacc();
      //	}
      //	display();
	printf("Enter Y to continue>>");
	stp=getch();
	return(stp);
}//end of process

//******************************************************************************

void newacc(int *pn)
{
	int *pna;
	char *pnn;
	clrscr();
	pna=pn;
	printf("\n\n\nYour account no is          >>  %d",*pna);
	pna++;
	printf("\nEnter the amount depositing >>  ");
	scanf("%d",pna);
	pna++;
	pnn=pna;
	printf("\nEnter the name		    >>  ");
	while(*(pnn--)!='\n')
	{
		scanf("%c",pnn);
		pnn++;
	}//end of while1
	*(pnn--)='\0';
	acc++;
}//end of new acc
			  
//******************************************************************************

void depo()
{
printf("Enter the amount depositing >>");
scanf("%d",);


}//end of depo()

//******************************************************************************


void widr()
{
printf("Enter the amount  >>");
scanf("%d",);
}//end of widr

//******************************************************************************


void bala()
{

}//end of balance

//******************************************************************************



void display()
{
clrscr();
printf("Acount No  	>>");
printf("Name            >>");
printf("Amount Balance  >>");
}//end of balance

//******************************************************************************


					