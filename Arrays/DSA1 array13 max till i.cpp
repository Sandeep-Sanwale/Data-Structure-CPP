#include<iostream>
using namespace std;
int* maxTilli(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
            arr[i+1]=arr[i];
    }
    return arr;
}
int main()
{
    int *arr,n;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    arr=new int[n];
    cout<<"enter elements of your array:"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    maxTilli(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}
