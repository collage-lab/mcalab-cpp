#include <stdio.h>
#include <conio.h>
void main()
{
int d,day;
clrscr();
printf("ENTER THE DAY \nsun=1,mon=2,the=3,wed=4,thu=5,fri=6,sat=7  ") ;
scanf("%d",&day);
 switch (day)
 {
 case 1:
  printf("Today is sundayand is a holiday");;
   break;
 case 2:printf("Today is monday and is a working day");
   break;
 case 3:printf("Today is tuesday and is a working day");
  break;
 case 4:printf("Today is wednesday and is a working day");
  break;
 case 5:printf("Today is tuesday and is a working day");
  break;
 case 6:printf("Today is friday and is a working day");
  break;
 case 7:printf("Today is satarday and is a working day");
  break;
 default:printf("Bug!\n");
}
getch();
}