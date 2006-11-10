#include <stdio.h>
#include <conio.h>
void main()
{
int NUM;
clrscr();
printf("ENTER THE NUMBER " ) ;
scanf("%d",&NUM);
printf("\t");
 switch (NUM)
 {
 case 0:
  printf("ZERO");
   break;
 case 1:
  printf("ONE");
   break;
  case2 :
  printf("TWO");
   break;
   case 3:
  printf("THREE");
   break;
   case 4 :
  printf("FOUR");
   break;
  case  5:
  printf("FIVE");;
   break;
  case 6:
  printf("SIX");;
   break;
   case 7:
  printf("SEVEN");;
   break;
   case 8 :
  printf("EIGHT");;
   break;
   case 9:
  printf("NINE");;
   break;
 default:printf("Bug!\n");
}
getch();
}