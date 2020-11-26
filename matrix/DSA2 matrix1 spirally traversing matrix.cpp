#include<iostream>
using namespace std;
void spirallyTraversing(int* a,int m,int n)
{
    int i,j,k=0,l=0;
    int up=0,left=0,right=n-1,down=m-1;
    while(left<=right && up<=down)
    {
        for(int i=up;i<=right;i++)
        {
            cout<<a[up][i];

        }
        up++;
        for(int i=up;i<=down;i++)
        {
            cout<<a[i][right];
        }
        right--;
        if(up<=down)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<a[down][i];
            }
        }
        down--;
        if(left<=right)
        {
            for(int i=down;i>=up;i--)
            {
                cout<<a[i][left];
            }
        }
        left++;

    }

}
int main()
{
     int m;
     int n;
    cout<<"enter number of rows and columns:";
    cin>>m>>n;
    int a[m][n];
    cout<<"enter elements of your matix :"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    cout<<"elements of your matix are :"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    spirallyTraversing(a,m,n);


}
