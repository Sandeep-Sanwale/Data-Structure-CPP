#include<iostream>
using namespace std;
int* getArray(int length)
{
    int* arr=new int[length];
    for(int i=0;i<length;i++)
        cin>>arr[i];

  return arr;
}
int* sum(int* arr1,int* arr2,int* arr,int length)
{
    for(int i=0;i<length;i++)
        arr[i]=arr1[i]+arr2[i];

}
int main()
{
    int *arr1,*arr2,*arr;int length;
    cout<<"enter size of array:"<<endl;
    cin>>length;
    cout<<"enter element of first array:"<<endl;
    arr1=getArray(length);
    cout<<"enter element of second array:"<<endl;
    arr2=getArray(length);
    arr=new int[length];
    sum(arr1,arr2,arr,length);
    for(int i=0;i<length;i++)
        cout<<arr[i];
}
