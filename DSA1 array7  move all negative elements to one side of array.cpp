#include<iostream>
using namespace std;
void MoveElements(int a[],int n)
{
    int count1=0,count2=0,,c[n],j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            a[count1]=a[i];
            count1++;
        }
         if(a[i]>=0)
        {
            c[count2]=a[i];
            count2++;
        }

    }
    for(int i=count1;i<n;i++)
    {
        a[i]=c[j];
        j++;
    }
return;
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
    cout<<"enter your Array:"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"your Array is:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    MoveElements(a,n);
    cout<<endl<<"Moved array is :"<<endl;
    printArray(a,n);

}

//URL- https://ide.geeksforgeeks.org/e43pQegff7
