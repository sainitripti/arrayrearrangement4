#include<iostream>
using namespace std;

void print(int ar[],int n);
void rearrange(int ar[],int n);

int main()
{
 int ar[]={1,2,3,-3,-9,-6,4,0,3,-7,-11,-2};
 int n=sizeof(ar)/sizeof(ar[0]);
 print(ar,n);
 rearrange(ar,n);
 print(ar,n);
 return 0;
}

void print(int ar[],int n)
{
 cout<<"\n";
 for(int i=0;i<n;i++)
  cout<<ar[i]<<"  ";
 cout<<"\n";
}

void rearrange(int ar[],int n)
{
 int i,j,key;
 
 for(int i=1;i<n;i++)
 {
  if(ar[i]>=0)
    continue;
  j=i-1;
  key=ar[i];
  
  while(j>=0&&ar[j]>=0)
  {
   ar[j+1]=ar[j];
   j=j-1;
  }
  
  ar[j+1]=key;
 }
}
