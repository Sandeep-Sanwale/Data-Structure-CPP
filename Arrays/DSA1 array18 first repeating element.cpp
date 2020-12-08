
#include<bits/stdc++.h>
using namespace std;
int RepeatingElement(int* arr,int n)
{
    int i,temp=-1,flag=0;
    if(n==1)
    return 0;

    for(i=0;i<n;i++)
    {
     for(int j=i+1;j<n;j++)  {
        if(arr[i]==arr[j])
        {
             temp=i+1;
             flag++;
             break;
        }


     }
     if(flag==1)
        break;

}
     return temp;
}
int main()
{
    int *arr,n;
    cout<<"enter size of array: "<<endl;
    cin>>n;
    cout<<"enter elements of your array: " <<endl;
    arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"the repeating which is first repeating index is : " <<RepeatingElement(arr,n);
}

