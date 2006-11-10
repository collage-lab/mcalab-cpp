//matrix symmetric
#include<stdio.h>
#include<conio.h>
main()
{
int i=0,n,j=0,flag=0;
int mat[10][10];
clrscr();
printf("Enter the order of the matrix ");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
printf("\t");
scanf("%d",&mat[i][j]);
}
}
clrscr();
for(i=0;i<n;i++)
{
printf("\n\n");
for(j=0;j<n;j++)
{
if(mat[i][j]!=mat[j][i])
{
flag=1;
break;
}
}
if(flag==1)
break;
}
if(flag!=1)
printf("the given matrix is symmetric");
else
printf("the given matrix is not symmetric");
getch();
return(0);
}