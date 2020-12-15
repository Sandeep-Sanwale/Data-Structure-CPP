#include <bits/stdc++.h>
using namespace std;

int IspowOf2(int n)
{
    if (n & (n - 1) != 0)
        return -1; //number is not power of 2
    return 1;      //number is power of 2
}
int main()
{
    int n;
    cin >> n;
    cout << IspowOf2(n);
}