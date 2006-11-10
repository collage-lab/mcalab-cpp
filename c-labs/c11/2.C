
//                11_2  swaping two numbers

#include<stdio.h>
#include<conio.h>
#include<math.h>
void swap();
main()
{
int num[2],*p;
clrscr();
printf("Enter two numbers");
scanf("%d%d",&num[0],&num[1]);
swap(&num);
printf(" Order changed >>  %d   %d   ",num[0],num[1]);
getch();
return(0);
}//end of main function


//swappig function starts
void swap(int *p1)
{
int temp;
int *p2;
p2=(p1+1);
temp=*p1;
*p1=*p2;
*p2=temp;
}//ending start function