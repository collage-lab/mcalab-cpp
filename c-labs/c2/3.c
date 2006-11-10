#include <stdio.h>
#include <conio.h>
void main()
{
int A,B,C;
clrscr();
printf("Enter the Numbers") ;
scanf("%d%d",&A,&B);
if(A>B)
    printf("The Number %d  is greatest",A);
else if (A<B)
   printf("The Number %d  is greatest",B);
else
   printf("The Number %d  &  The Number %d is equaul",A,B);
getch();
}