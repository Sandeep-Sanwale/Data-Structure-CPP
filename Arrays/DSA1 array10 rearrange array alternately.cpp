#include<iostream>
using namespace std;
void RearrangeArray(int arr[],int n)
{
    int i,j=0,tempp=0,arr1[n];
    for(i=0;i<n;i++)
        arr1[i]=arr[i];
    for(i=0;i<n;i++)
    {


        tempp=arr1[j];
        arr[i]=arr1[n-1-j];
        arr[i+1]=tempp;
        i++;
        j++;

    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";

        //second code to implement this ...
        /*
{
    // Auxiliary array to hold modified array
    int temp[n];

    // Indexes of smallest and largest elements
    // from remaining array.
    int small=0, large=n-1;

    // To indicate whether we need to copy rmaining
    // largest or remaining smallest at next position
    int flag = true;

    // Store result in temp[]
    for (int i=0; i<n; i++)
    {
        if (flag)
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];

        flag = !flag;
    }

    // Copy temp[] to arr[]
    for (int i=0; i<n; i++)
        arr[i] = temp[i];
}
*/

}
int main()
{
    int n;
    cout<<"Enter size of array:  ";
    cin>>n;
    int arr[n];
    cout<<"enter Your elements :";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    RearrangeArray(arr,n);

}
