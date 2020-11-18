#include<iostream>
using namespace std;

int findsmallestElement(int arr[],int n,int k)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }


    }



return arr[k-1];
}
int main()
{
    int n,k;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Your Array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        //cout<<" ";
    }
    cout<<"\nEnter the kth smalllest Element you want to search in Array"<<endl;
    cin>>k;
    cout<<"Kth smallest number is "<<findsmallestElement(arr,n,k);


}
