#include<iostream>
using namespace std;
void printArray(int**arr,int m,int n)
{
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<arr[i][j]<<" ";
        }
            cout<<endl;
    }
}
//It creates an array dynamically make his space in memory;
int** getArray(int m,int n){
    int** arr=new int*[m];
    for(int i=0;i<m;++i){
        arr[i]=new int[n];
    }
  return arr;
}

int main()
{
    int **arr,rows,columns;
    cout<<"enter values of rows and columns: "<<endl;
    cin>>rows>>columns;
    arr=getArray(rows,columns);
    //put the value in array:
    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<columns;++j)
            cin>>arr[i][j];
    }
    printArray(arr,rows,columns);
    return 0;
}
