#include<iostream>
using namespace std;
void cyclicrotate(int a[],int n)
{

   //In this method we shifted array by one ...
   int temp=a[n-1];
   for(int i=n-1;i>0;i--)
    a[i]=a[i-1];
    a[0]=temp;
/*  //This is the second method in it we first store the last element in temp var and then store the other value of array from 0 to n-1 in other array then merge the value of temp as 0th index and the other array will merged on then.
    int temp=a[n-1];
    int b[n];
    for(int i=0;i<n-1;i++)
    {

       b[i]=a[i];
      // cout<<b[i];
    }
    for(int i=0;i<n;i++)
    {
       if(i==0)
          a[i]=temp;
       else
          a[i]=b[i-1];
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

*/

}
int main()
{
    int a[12]={1,2,3,4,5,8,6,7,9,101,111,123};
    int n=sizeof(a)/sizeof(a[0]);
    //Declaration of array to cyclic rotate the array by one
    cyclicrotate(a,n);
    //print the cyclic rotate by one ..
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
