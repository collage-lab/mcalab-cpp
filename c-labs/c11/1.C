
//                     11_1   number stored

#include<stdio.h>
#include<conio.h>
main()
{
int *p,var;
clrscr();
printf("Enter a number");
scanf("%d",&var);
p=&var;
printf("number %d is stord in %d location",var,p);
getch();
return(0);
}//end of main function