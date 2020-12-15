#include <bits/stdc++.h>

using namespace std;
int msSetb(int n)
{
    int bitpos = log2(n);
    int mssb = pow(2, bitpos);
    return mssb;
}
int main()
{
    int n;
    cin >> n;
    cout << msSetb(n) << endl;
}
