//book struct
#include<stdio.h>
#include<conio.h>
#include<string.h>
int enter();
void sort();
int copy();
void diss();
struct student
{
char title[20],author[20];
int year,copy;
}book[20];
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
printf("enter no of books:>");
scanf("%d",&n);
for(i=0;i<n;i++)
{
clrscr();
printf("Enter the  name of book : %d : >",i+1);
scanf("%s",&book[i].title);
printf("Enter the  name ofthe auther of the book : %d : >",i+1);
scanf("%s",&book[i].author);
printf("Enter the  year of book : %d : >",i+1);
scanf("%d",&book[i].year);
printf("Enter the  no of copy of book : %d : >",i+1);
scanf("%d",&book[i].copy);
}
return (n);
}
//total no of coppy
int copy(int n)
{
int i,sum=0;
for(i=0;i<n;i++)
{
sum=sum+book[i].copy;
}
return(sum);
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
if(strcmp(book[j-1].title,book[j].title)>0)
{
//copying title
strcpy(temp,book[j-1].title);
strcpy(book[j-1].title,book[j].title);
strcpy(book[j].title,temp);
//coping author
strcpy(temp,book[j-1].author);
strcpy(book[j-1].author,book[j].author);
strcpy(book[j].author,temp);
//copying year of pub
tem=book[j-1].year;
book[j-1].year=book[j].year;
book[j].year=tem;
// copying no of copys
tem=book[j-1].copy;
book[j-1].copy=book[j].copy;
book[j].copy=tem;
}//if clo
}//j-for clo
}//i-for clo
}

// disp
void diss(int n)
{
int i;
clrscr();
printf(" new lists are :>\n\n");
printf("\ntitle ofbook\tauthorsname\t year of pb\t no of copy\n\n");
for(i=0;i<n;i++)
{
printf("%s\t%s\t\t%d\t\t%d\n",book[i].title,book[i].author,book[i].year,book[i].copy);
}
}