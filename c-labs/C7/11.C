//bubble sorting
#include<stdio.h>
#include<conio.h>
main()
{
int i=0,n,j=0,k=0;
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
//dignal matrix
printf("printing diganal elements\n");
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<i;j++)
printf("  ");
printf("%d",mat[i][i]);
}
delay(2000);
//upper tri matrix
clrscr();
printf("\nprinting upper tri matrix\n");
for(i=0;i<n;i++)
{
printf("\n\n");
for(j=i+1;j<n;j++)
{
for(k=0;k<=i;k++)
printf("   ");
printf("%d",mat[i][j]);
}
}
//lower tri matrix
delay(2000);
clrscr();
printf("printing lower tri matrix\n");
for(i=1;i<n;i++)
{
printf("\n\n");
for(j=0;j<i;j++)
{
printf("   ");
printf("%d",mat[i][j]);
}
}
getch();
return(0);
}