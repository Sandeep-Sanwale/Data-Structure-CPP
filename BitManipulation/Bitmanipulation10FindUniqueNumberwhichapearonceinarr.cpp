#include <bits/stdc++.h>

using namespace std;
// Hint : A ⊕ B ⊕ B ⊕ A ⊕ C = C.All those numbers which occur twice will get nullified   after ⊕ operation.

int UniqNumbr(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum ^= arr[i];
    }
    return xorsum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << UniqNumbr(arr, n);
}