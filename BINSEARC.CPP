#include<iostream.h>
#include<conio.h>

void search(int prr[],int size,int se)
{
 int ll,ul,mid,j;
 ll=0;ul=size-1;
 mid=(ul+ll)/2;
 for(j=1;j<=size;j++)
 {
  mid=(ul+ll)/2;
  if(se<prr[mid])
  ul=(mid-1);
  else if(se>prr[mid])
  ll=(mid+1);
  else
  {
   cout<<"Element found at location "<<mid;
   break;
  }
 }
}


void main()
{
 int arr[100],i,e,m;
 clrscr();
 cout<<"Enter array size:";
 cin>>m;
 for(i=0;i<m;i++)
 {
  cout<<endl<<"Element["<<i<<"]:-";
  cin>>arr[i];
 }
 cout<<endl<<"Element to be found:";
 cin>>e;
 search(arr,m,e);
 getch();
}