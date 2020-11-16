#include<iostream>
using namespace std;

int  leftrotate(int a[],int n,int d)
{
      int temp[n];
//seprate all rotated elements in temp.

for(int i=0;i<d;i++)
{
    temp[i]=a[i];
}

//change the position of not rotated element from index 0;
for(int i=0;i<n;i++)
{
    a[i]=a[d+i];
}
cout<<endl;
//now assign the element which are rotated and the assigning position start with the size where that start to assign.
for(int i=0;i<d;i++)
{
    a[n-d+i]=temp[i];

}

return 0;
}
//print the leftrotated array.
void printarray(int a[],int n)
{
for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}

int main()
{
    int n,d, a[100];

    cout<<"enter totle  elements "<<endl;
    cin>>n;
    cout<<"enter your elements:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The non-rotational array is ={";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<", ";
    }
    cout<<"}"<<endl;

    cout<<"enter rotational elements number"<<endl;
    cin>>d;
    leftrotate(a,n,d);
    printarray(a,n);

}
