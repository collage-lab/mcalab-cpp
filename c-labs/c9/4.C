//selection sorting
#include<stdio.h>
#include<conio.h>
int sort();
int countmax();
static int arr[40];
main()
{
int i=0,j=0;
int no,tem,max;
clrscr();
printf("Enter the how many numbers ");
scanf("%d",&no);
printf("enter the numbers");
i=0;
while(i<no)
{
scanf("%d",&arr[i]);
i++;
}
//sort function calling
sort(no);
printf("sorted order is");
for(i=0;i<no;i++)
printf("\t%d",arr[i]);
max=countmax(no);
printf("\nmax no of %d is %d ",arr[0],max);
getch();
return 0;
}
//function sort

sort(int n)
{
int i,j,tem,k;
for(i=0;i<n;i++)
{
for(j=i+1;j<=n;j++)
{
if(arr[i]<=arr[j])
{
tem=arr[j];
arr[j]=arr[i];
arr[i]=tem;
} //if
} //for j
} //for i

return 0;
} //fumction

countmax(int n)
{
int i=0;
for(i=0;i<n;i++)
{
if (arr[i]!=arr[i+1])
{
break;
}
}//for
return(i+1);

}//function