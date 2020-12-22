//Find set Bit in a range of a numbers binary representation---
// Ex -
//     n = 79 = 1001111;
//     l = 1, r = 4;
//     output - 4; totle set bit from l to r

#include <bits/stdc++.h>

using namespace std;

int CountSetBit(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }

    return count;
}
int SetBitInGivenRange(int n, int l, int r)
{
    int num = ((1 << r) - 1) ^ ((1 << (l - 1)) - 1);
    //Num having  r number of bit in given range and bits from l to r are set bits// num for 79 from 1 to 4 is 1111
    n = n & num;
    // return count of  set bits in range l to r....
    return CountSetBit(n); //for 79 count is 4;
}
int main()
{
    int n;
    int l, r;
    cin >> n >> l >> r;
    cout << SetBitInGivenRange(n, l, r);
}