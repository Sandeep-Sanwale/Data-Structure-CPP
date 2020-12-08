#include <iostream>
using namespace std;
void transposeMatrix(int* a,int n)
{
    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            //*(a+i*n+j)=*(a+j*n+i);
	            cout<<*(a+j*n+i)<<" ";
	        }
	        cout<<endl;
	    }
}
int main() {
	//code

	    int n;
	    cin>>n;
	    int a[n][n];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	        }
	    }

transposeMatrix((int*)a,n);

return 0;
}
