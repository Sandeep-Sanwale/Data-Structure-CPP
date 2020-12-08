#include<iostream>
using namespace std;
int** getArray(int n,int m)
{
    int **arr=new int*[n];
    for(int i=0;i<n;++i){
        arr[i]=new int[m];
         for(int j=0;j<m;++j)
            cin>>arr[i][j];
    }
  return arr;

}
int** sumofMatrix(int** arr1,int** arr2,int n,int m,int** arr3)
{
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
        cout<<endl;

    }
    return arr3;
}
int main()
{
    int **arr1,**arr2,**arr3;
    int rows,columns;
    cout<<"enter rows and columns of both Array :"<<endl;
    cin>>rows>>columns;
    cout<<"enter elements of first array:"<<endl;
    arr1=getArray(rows,columns);
    cout<<"enter elements of second array:"<<endl;
    arr2=getArray(rows,columns);
    cout<<"sum of both matrix is: "<<endl;
    arr3=new int*[rows];
    for(int i=0;i<rows;++i){
        arr3[i]=new int[columns];
    arr3=sumofMatrix(arr1,arr2,rows,columns,arr3);
     for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<arr3[i][j];
        }
        cout<<endl;

    }
    return 0;
}

}
