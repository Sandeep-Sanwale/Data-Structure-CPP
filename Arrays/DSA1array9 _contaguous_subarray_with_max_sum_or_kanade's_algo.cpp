#include <iostream>
using namespace std;
int MaxSum(int arr[], int n)
{
    int sum_till_now = 0, max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum_till_now = sum_till_now + arr[i];
        if (sum_till_now < arr[i])
            sum_till_now = arr[i];
        if (sum_till_now > max_sum) //max_sum=max(max_sum,sum_till_now)
            max_sum = sum_till_now;
    }

    return max_sum;
}
int main()
{

    int n;
    cout << "Enter size of Array:  ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements of Your Array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Elements of Your Array are : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nMax sum is :" << MaxSum(arr, n);
}
