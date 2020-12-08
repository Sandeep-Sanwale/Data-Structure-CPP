#include<bits/stdc++.h>
using namespace std;
int MissingPositiveNumber(int *arr,int n)
{
    int *check;
    check=new int[n];
    for(int i=0;i<n;i++)
            check[i]=false;
    for(int i=0;i<n;i++)
    {
           if(arr[i]>=0)
           {
                  check[arr[i]]=true;
           }

    }
      for(int i=0;i<n;i++)
      {
               if(check[i]==false)
                return i;
      }

     cout<<"There is Not smallest positive number here in given range" ;
     return 0;
}
int main()
{
    int *arr,n;
    cout<<"enter size of your Array:"   ;
    cin>>n;
    arr=new int[n];
    cout<<"enter elements of your Array:" ;
    for(int i=0;i<n;i++)
        cin>>arr[i];
  cout<<"\nyour array:" ;
    for(int i=0;i<n;i++)
        cout<<arr[i]  << " ";
     cout<<"\nMissing Positive number is :" <<MissingPositiveNumber(arr,n);

}
