
 //                 11_3  sum of n numders

#include<stdio.h>
#include<conio.h>
#include<math.h>
int sum();
main()
{
int num[10],*p,i,no;
clrscr();
printf("Enter value of n>>");
scanf("%d",&no);
printf("Enter the numbers..");
for(i=0;i<no;i++)
scanf("%d",&num[i]);
printf(" The sum of fnum nuimbers>>>> %d ",sum(&num,no));
getch();
return(0);
}//end of main function


//sum function starts
int sum(int *p1,int n)
{
int sum=0,i;
for(i=0;i<n;i++,p1++)
sum=sum+*p1;
return(sum);

}//ending start function