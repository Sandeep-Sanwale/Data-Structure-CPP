#include<iostream>
using namespace std;

maximumElement(int a[],int n)
{
     int Max =a[0];
    for(int i=0;i<n;i++)
    {
        if(Max<a[i])
            Max=a[i];


    }


return Max;
}
minimumElement(int a[],int n)
{
     int Min =a[0];
    for(int i=0;i<n;i++)
    {
        if(Min>a[i])
            Min=a[i];
    }


return Min;
}


int main()
{
    int a[6]={1,22,34,12,56,2};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"minimum value of a element is:"<<minimumElement(a,n)<<endl;
    cout<<"maximum value of a element is:"<<maximumElement(a,n)<<endl;

}






/*
//Minimum and Maximum value of an element of an array throgh structure .

#include<iostream>
using namespace std;
struct Pair{
int Max;
int Min;
};
struct Pair getMinMax(int a[],int n)
{
    struct Pair MinMax;
    int i;
    if(n==1)
    {
        MinMax.Min=a[0];
        MinMax.Max=a[0];
    }
         MinMax.Max =a[0];
         MinMax.Min =a[0];
    for(int i=0;i<n;i++)
    {
        if(MinMax.Max<a[i])
            MinMax.Max=a[i];

        if(MinMax.Min>a[i])
            MinMax.Min=a[i];

    }


return MinMax;
}

int main()
{
    int a[5]={1,100,1000,3000,10000};
    int n=sizeof(a)/sizeof(a[0]);
    struct Pair MinMax=getMinMax(a,n);
    cout<<"Mimimum value of an Element in Array is "<<MinMax.Min<<" "<<"Maximum value of an Element in array is:"<<MinMax.Max;

}

*/
