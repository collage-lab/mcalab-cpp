#include<stdio.h>
#include<conio.h>
main()
{
int i,lim;
int fact,temp;
clrscr();
printf("Enter the limit:>  ");
scanf("%d",&lim);
temp=facto(lim);
printf("%d",temp);
getch();
}
//function fact
int facto(int l)
{
int fa;
if(l==1)
return 1;
else
{
fa=l*facto(l-1);
return(fa);
}
}

