#include <bits/stdc++.h>
using namespace std;

int RightSetBit(int n)
{
    int mask = 1, counter = 0;
    while (n)
    {
        if (n & mask)
            return counter;

        n >>= 1;
        counter++;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    // we have count from 0 to 1
    cout << RightSetBit(n);
}