//multiply  matrix
#include<stdio.h>
#include<conio.h>
main()
{
int i=0,j=0,k=0,sum=0;
int mat1[10][10],mat2[10][10],matr[10][10];
int n;
clrscr();
printf("Enter the order of the matrix ");
scanf("%d",&n);
printf("enter the elements of matrix 1");
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
printf("\t");
scanf("%d",&mat1[i][j]);
}
}
clrscr();
printf("enter the elements of matrix 2");
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
printf("\t");
scanf("%d",&mat2[i][j]);
}
}
clrscr();
//multiplycation
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
sum=0;
for(k=0;k<n;k++)
sum=sum+(mat1[i][j]*mat2[i][k]);
matr[i][j]=sum;
}
}
clrscr();
printf("product of the given matrix is\n");
for(i=0;i<n;i++)
{
printf("\n\n");
for(j=0;j<n;j++)
{
printf("%d\t",matr[i][j]);
}
printf("\n");
}
getch();
return(0);
}