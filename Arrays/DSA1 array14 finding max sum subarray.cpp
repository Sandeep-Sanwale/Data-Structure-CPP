/* C++ code to generate all possible subarrays/subArrays
	Complexity- O(n^3) */
#include<bits/stdc++.h>
using namespace std;

// Prints all subarrays in arr[0..n-1]
void subArray(int arr[], int n)
{
	// Pick starting point
	int MaxSum=INT_MIN;
	for (int i=0; i <n; i++)
	{
		// Pick ending point
		for (int j=i; j<n; j++)
		{
			// Print subarray between current starting
			// and ending points
			int sum=0;
			for (int k=i; k<=j; k++)         {
				//cout << arr[k] << " ";
				//adding every subArray in a variable to compare
				sum+=arr[k];
		        }
		    MaxSum=max(MaxSum,sum);
		}
	}
	cout<<MaxSum;
}

// Driver program
int main()
{
	int arr[] = {1, 2, 3, 4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "All Non-empty Subarrays\n";
	subArray(arr, n);
	return 0;
}

