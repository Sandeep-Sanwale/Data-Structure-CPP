#include<bits/stdc++.h>
using namespace std;
int breakingDay(int* arr,int n )
{
                  int mx=-1,ans=0;
                  //int arr[n]=-1   ;
    if(n==1)
        return 1;
    for(int i=1;i<n;++i)
    {
        if(arr[i]>mx && arr[i]>arr[i+1])
            {
                   ans++;
                   //cout<<i+1<<endl;        for printing the days..
            }
        mx=max(mx,arr[i]);
    }

   return ans;
}
//driver code
int main()
{
    int *arr,n;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    arr=new int[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    cout<<"Your breaking days are :" <<breakingDay(arr,n)<<"  days";

}
