#include <bits/stdc++.h>

using namespace std;
// Hint : A ⊕ B ⊕ B ⊕ A ⊕ C = C.All those numbers which occur twice will get nullified   after ⊕ operation.
int GetBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int SetBit(int n, int pos)
{
    return (n | (1 << pos));
}
int UniqNumbr(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (GetBit(arr[j], i))
                sum++;
        }
        if (sum % 3 != 0)
            result = SetBit(result, i);
    }
    return result;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << UniqNumbr(arr, n);
}