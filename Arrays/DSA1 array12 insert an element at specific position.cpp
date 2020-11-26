#include<iostream>
using namespace std;
void insertElement(int arr[],int n,int pos,int value)
{

    for(int i=n-1;i>pos;i--)
    {

          arr[i]=arr[i-1];
          arr[pos]=value;

    }

}
int main()
{
    int arr[100]={1,2,3,4,5,6};
    int n=sizeof(arr);
    cout<<n;
    int pos,value;
    cout<<"enter the position of element and value:"<<endl;
    cin>>pos>>value;
    insertElement(arr,n,pos,value);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
