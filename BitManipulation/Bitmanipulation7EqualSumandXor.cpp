#include <iostream>

using namespace std;

int EqualSumandXor(int n)
{
    int unset_bit = 0;
    while (n)
    {
        if ((n & 1) == 0)
            unset_bit++;

        n = n >> 1;
    }
    return 1 << unset_bit;
}

int main()
{

    int n;
    cin >> n;
    cout << EqualSumandXor(n);
}
