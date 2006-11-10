//opperant
#include<stdio.h>
#include<conio.h>
void add();
void sub();
void mul();
void div();
char menu();
void main()
{
char opper;
clrscr();
opper= menu();
switch(opper)
{
case '+': add(); break;
case '-': sub(); break;
case '/': div(); break;
case '*': mul(); break;
defalt: printf("BUG!!!");
}
getch();
}
//menu
char menu()
{
char opp;
printf("enter the opperant   +   -   /   *  :>");
opp=getche();
return(opp);
}
//add
add()
{
int num1,num2,sum;
printf("enter the numbers :>  ");
scanf("%d%d",&num1,&num2);
sum=num1+num2;
printf(" %d + %d =  %d",num1,num2,sum);
}
//sub
sub()
{
int num1,num2,sum;
printf("enter the numbers :>  ");
scanf("%d%d",&num1,&num2);
sum=num1-num2;
printf(" %d - %d =  %d",num1,num2,sum);
}

div()
{
int num1,num2;
float sum;
printf("enter the numbers :>  ");
scanf("%d%d",&num1,&num2);
sum=num1/(float)num2;
printf(" %d / %d =  %f",num1,num2,sum);
}
//mull
mul()
{
int num1,num2,sum;
printf("enter the numbers :>  ");
scanf("%d%d",&num1,&num2);
sum=num1*num2;
printf(" %d * %d =  %d",num1,num2,sum);
}

