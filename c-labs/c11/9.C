
//			     9_add matrix

#include<stdio.h>
#include<conio.h>
#include<math.h>
void comp();
void dis();
main()
{
	int mat_1[15],mat_2[15],mat_3[15];
	int i,j;
	int no,con;
	int m,n;
	int *pm1,*pm2,*pm3;
	clrscr();
	pm1=mat_1;
	pm2=mat_2;
	pm3=mat_3;
	printf("Enter oder of matrix>>");
	scanf("%d%d",&m,&n);
//entering first matrix
	printf("Enter the matrix 1..>>>");
	for(i=0;i<m+n;i++,pm1++)
	 {
			scanf("%d",pm1);
	 }//end of Ist for

//entering second matrix

	printf("Enter the matrix 2..>>>");
	for(i=0;i<m+n;i++,pm2++)
	 {
		scanf("%d",pm2);
	 }//end of Ist for

//adding matrix 1 & 2

	pm1=mat_1;
	pm2=mat_2;
	pm3=mat_3;

	for(i=0;i<m+n;i++,pm1++,pm2++,pm3++)
	 {
		*pm3=*pm1+ *pm2;
	 }//end of Ist for


//displaying matrix 3

	pm3=mat_3;

	printf("Sum of matrix 1 & 2 >>>\n");
	for(i=0;i<m;i++)
	 {
		for(j=0;j<n;j++)
		{
			printf("%d  ",*pm3);
			pm3++;
		}//end of 2nd for
		printf("\n");
	 }//end of Ist for

	getch();
	return(0);
}//end of main function
