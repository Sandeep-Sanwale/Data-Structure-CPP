#include<iostream>
using namespace std;
void sortArray(int a[],int n)
{
    int mid=0,low=0,high=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            low++;
        if(a[i]==1)
            mid++;
        if(a[i]==2)
            high++;

    }
    for(int i=0;i<low;i++)
            a[i]=0;
    for(int i=low;i<(low+mid);i++)
            a[i]=1;
    for(int i=(low+mid);i<n;i++)
            a[i]=2;

}
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
}
int main()
{
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter your Array:"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Your Array is:";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    sortArray(a,n);
    cout<<"sorted Array is:"<<endl;
    printArray(a,n);
}

