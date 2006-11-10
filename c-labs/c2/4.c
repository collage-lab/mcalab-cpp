#include <stdio.h>
#include <conio.h>
void main()
{
int A,B,C;
clrscr();
printf("Enter the Three Numbers") ;
scanf("%d%d%d",&A,&B,&C);
if(A>B)
{
if(A>C)
    printf("The Number %d  is greatest",A);
else
   printf("The Number %d  is greatest",C);
 }
else if(B>C)
{
    printf("The Number %d  is greatest",B);
  }
 else if(B<C)
 {
   printf("The Number %d  is greatest",C);
 }
 else
 {
  printf("The Number are  equaul");
  }
getch();
}