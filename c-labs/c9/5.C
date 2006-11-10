//function matrix
#include<stdio.h>
#include<conio.h>
int readmat();
float average();
float rowavg();
float colavg();
void dismat();
static int mat1[10][10];
main()
{
int n;
clrscr();
n=readmat();
clrscr();
printf("\nDisplaying the matrix:> \n");
dismat(n);
dismod();
getch();
return(0);
}

//function read
readmat();
{
int i,j;
printf("Enter the order of the matrix ");
scanf("%d",&n);
printf("enter the elements of matrix 1");
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
printf("\t");
scanf("%d",&mat[i][j]);
}
}
return(n);
}


//function dismat
dismat(int n)
{
int i,j;
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
printf("\t%d",mat[i][j]);
}
printf("\n");
}
}


//functiondismod