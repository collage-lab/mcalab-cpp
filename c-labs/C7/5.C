#include<stdio.h>
#include<conio.h>
main()
{
char ref[17]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int base[25];
int num,rim,k,div,i,j;
char ch;
clrscr();
printf("Enter B for binary O for octal X for hexa\n");
ch=getche();
printf("\nenter the number ");
scanf("%d",&num);
switch (ch)
{
case 'b':div=2;break;
case 'B':div=2;break;
case 'o':div=8;break;
case 'O': div=8;break;
case 'x':div=16;break;
case 'X':div=16;break;
default: printf("bug!!!");
}
for(i=0;num>0;i++)
{
rim=num%div;
num=num/div;
base[i]=rim;
}
printf("number in base %d is\t",div);
for(j=i;j>0;j--)
{
i=base[j-1];
printf("%c",ref[i]);
}
getch();
return(0);
}