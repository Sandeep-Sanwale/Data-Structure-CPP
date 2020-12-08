#include<iostream>
using namespace std;
int longestSubArray(int* arr,int n)
{
  int ans=2;
  int pd=arr[1]-arr[0];
  int curr=2;
  for(int i=2;i<n;i++)
  {
      if(arr[i]-arr[i-1]==pd)
      {
                   curr++;
      }
      else     {
                  pd=arr[i]- arr[i-1];
                  curr=2;
      }
      ans=max(ans,curr);

  }


  return ans;
}
//driver function to run above code ....
int main()
{
    int *arr,n;
    cin>>n;
    arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Your array is :"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<"\nlongest subArray is :"      <<endl;
        cout<<longestSubArray(arr,n);

}

