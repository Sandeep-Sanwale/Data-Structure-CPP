#include<iostream>
using namespace std;
void RearrangeArray(int arr[],int n)
{
    int i,j=0,temp=0;
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-j];
        arr[i+1]=temp;
        i++;
        j++;

    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

}
int main()
{
    int n;
    cout<<"Enter size of array:  ";
    cin>>n;
    int arr[n];
    cout<<"enter Your elements :";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    RearrangeArray(arr,n);

}
