#include<iostream>
using namespace std;

//method one or we say function one to reverse an array or string..This is less complex
void reversearray1(int a[],int start,int End)
{
    while(start<End)
    {
        int temp=a[start];
        a[start]=a[End];
        a[End]=temp;
        start++;
        End--;
    }
}
/*
//Method 2 to reverse an array or string ..we use both both are right..
void reversearray(char a[],int n)
{
    char b[n];
  for(int i=0;i<n;i++)
  {
     b[i]=a[n-1-i];
  }
  for(int i=0;i<n;i++)
    a[i]=b[i];
}
*/
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int a[29]={1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    //char a[10]={'s','a','n','d','e','e','p','s','a','s'};
    int n=sizeof(a)/sizeof(a[0]);
    reversearray1(a,0,n-1);
    //reversearray(a,n);
    cout<<"reversed array is :";
    printarray(a,n);
}
