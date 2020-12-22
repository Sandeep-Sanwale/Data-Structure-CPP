#include <bits/stdc++.h>

using namespace std;
// Hint : A ⊕ B ⊕ B ⊕ A ⊕ C = C.All those numbers which occur twice will get nullified   after ⊕ operation.

int SetBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
void UniqNumbr(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum ^= arr[i];
    }

    int tempxor = xorsum;
    int setBit = 0;
    int pos = 0;
    while (setBit != 1)
    {
        setBit = xorsum & 1;
        pos++;
        xorsum >>= 1;
    }
    int Newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (SetBit(arr[i], pos - 1))
        {
            Newxor = Newxor ^ arr[i];
        }
    }
    cout << Newxor << " ";
    cout << (tempxor ^ Newxor) << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    UniqNumbr(arr, n);
}