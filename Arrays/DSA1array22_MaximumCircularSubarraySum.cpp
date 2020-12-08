#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n);
{
    int currentsum = 0;
    maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        if (currentsum < 0)
            currentsum = 0;
        maxsum = max(maxsum, currentsum);
    }
    return maxsum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        for (i = 0; i < n; i++)
            cout << arr[i] << " ";

        int wrapsum;
        int nonwrapsum;
        nonwrapsum = kadane(arr, n);
        int totalsum = 0;
        for (int i = 0; i < n; i++)
        {
            totalsum += arr[i];
            arr[i] = -arr[i];
        }
        wrapsum = totalsum + kadane(arr, n);

        cout << max(nonwrapsum, wrapsum) << endl;
    }
    return 0;
}