#include <bits/stdc++.h>

using namespace std;

int NewNumbr(int n)
{
    //First Method
    // int result;
    // int mask = 1;
    // while (mask <= n)
    // {
    //     if ((n & mask) != 0)
    //     {
    //         result = n & (~mask);
    //         return result;
    //     }
    //     mask <<= 1;
    // }
    // return -1;

    // second and efficient method  O(1)
    return (n & (n - 1));
}
int main()
{
    int n;
    cin >> n;
    cout << NewNumbr(n);
}