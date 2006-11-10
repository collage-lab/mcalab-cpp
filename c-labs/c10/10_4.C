//student struct
#include<stdio.h>
#include<conio.h>
#include<string.h>
int enter();
void sort();
int copy();
void diss();
enum genter {male,female};
struct student
{
enum genter g[' '];
char name[20];
int mark1,mark2,mark3,total;
}std[20];
main()
{
int n,no;
clrscr();
n=enter();
sort(n);
diss(n);
getch();
return 0;
}
//entering std det
int enter()
{
int n,i;
printf("enter no of student:>");
scanf("%d",&n);
for(i=0;i<n;i++)
{
clrscr();printf("Enter the  name of student %d : >",i+1);
scanf("%s",&std[i].name);
printf("Enter the genter:>");
scanf("%s",&std[i].g);
printf("Enter the mark of sub 1of stud %d  :>",i+1);
scanf("%d",&std[i].mark1);
printf("Enter the mark ofsub 2 of stud %d : >",i+1);
scanf("%d",&std[i].mark2);
printf("Enter the mark of sub 3 of stud %d : >",i+1);
scanf("%d",&std[i].mark3);
std[i].total=std[i].mark1+std[i].mark2+std[i].mark3;
}
return (n);
}
//scorting
void sort(int n)
{
int i=0,j=0,tem;
char temp[20];
for(i=n;i>0;i--)
{
for(j=0;j<i;j++)
{
if(std[j-1].total>std[i].total)
{
//copying name
strcpy(temp,std[j-1].name);
strcpy(std[j-1].name,std[j].name);
strcpy(std[j].name,temp);
//coping genter
/*tem=std[j-1].g;
std[j-1].g=std[j].g;
std[j].g=tem;*/
//coping mark1
tem=std[j-1].mark1;
std[j-1].mark1=std[j].mark1;
std[j].mark1=tem;
//coping mark2
tem=std[j-1].mark2;
std[j-1].mark2=std[j].mark2;
std[j].mark2=tem;
//coping mark3
tem=std[j-1].mark3;
std[j-1].mark3=std[j].mark3;
std[j].mark3=tem;
}//if clo
}//j-for clo
}//i-for clo
}

// disp
void diss(int n)
{
int i;
clrscr();
printf(" new lists is :>\n\n");
printf("\nRank\tName\t sub 1\t sub2 \tsub3\tTotal\n\n");
for(i=0;i<n;i++)
{
printf("%d  %s\t  %s   %d\t\t%d\t\t%d\t\t%d\n",i+1,std[i].name,std[i].g,std[i].mark1,std[i].mark2,std[i].mark3,std[i].total);
}
}