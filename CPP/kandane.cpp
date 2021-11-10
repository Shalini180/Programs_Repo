#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int msum(int a[],int n)
{
 int max_so_far,max_till;
 max_so_far=0;
 max_till=0;
 for(int i=0;i<n;i++)
 {
     max_till+=a[i];
     if(max_till<0)
     max_till=0;
     if(max_till>max_so_far)
     max_so_far=max_till;
 }
 return max_so_far;
}
int main()
{
   int a[]={-2,-3,4,-1,-2,1,5,-3};
   int m=sizeof(a)/sizeof(a[0]);
   int p=msum(a,m);
   cout<<"Maximum Contiguous sum "<<p;
    return 0;
}
