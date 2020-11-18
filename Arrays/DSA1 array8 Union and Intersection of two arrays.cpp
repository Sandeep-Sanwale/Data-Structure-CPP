#include<iostream>
using namespace std;
void UnionElements(int arr1[],int arr2[],int m,int n)
{
    int arr4[m],k=0,arr[m+n],l=0,w,K;
    for(int i=0;i<m;i++)
    {
        w=0;
        for(int j=0;j<n;j++)
        {
             if(arr2[i]==arr1[j])
                w++;
        }
        if(w==0)
        {
            arr4[k]=arr2[i];
            k++;
        }


    }
    K=k;

    for(int i=0;i<n;i++)
      arr[i]=arr1[i];
    for(int i=n;k>0;i++)
    {
        arr[i]=arr4[l];
        l++;
        k--;
    }
    cout<<endl;
    for(int i=0;i<(n+K);i++)
        cout<<arr[i]<<" ";




}

void IntersectionElements(int arr1[],int arr2[],int m,int n)
{
    int arr4[m],k=0,arr[m+n],l=0,w,K;
    for(int i=0;i<m;i++)
    {
        w=0;
        for(int j=0;j<n;j++)
        {
             if(arr2[i]==arr1[j])
                w++;
        }
        if(w>0)
        {
            arr4[k]=arr2[i];
            k++;
        }


    }
    K=k;
    if(k==0)
        cout<<"intersection Between Both Array is not found"<<endl;

    for(int i=0;k>0;i++)
    {
        arr[i]=arr4[l];
        l++;
        k--;
    }
    cout<<endl;
    for(int i=0;i<K;i++)
        cout<<arr[i]<<" ";




}

//Driver code
int main()
{
    int n,m;
    cout<<"enter size of arr1 and arr2 respectively: "<<endl;
    cin>>n>>m;
    int arr1[n],arr2[m];
    cout<<"enter elements of array arr1 :"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    cout<<"enter elements of array arr2 :"<<endl;
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    cout<<"Elements of array arr1 :";
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    cout<<endl<<"Elements of array arr2 :";
    for(int i=0;i<m;i++)
        cout<<arr2[i]<<" ";
    cout<<"Union of Both Array is : "<<endl;
    UnionElements(arr1,arr2,m,n);
    cout<<"\nIntersection of Both Array is : "<<endl;
    IntersectionElements(arr1,arr2,m,n);
    //printArray(arr)
}
