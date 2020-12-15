#include <bits/stdc++.h>
using namespace std;

int XOR1TN(int n)
{
    if (n % 4 == 0)
        return n;
    else if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return (n + 1);
    else if (n % 4 == 3)
        return 0;
    return 0; //may be the loop is not working that point tk
}

int main()
{
    int n;
    cin >> n;

    cout << "XOR from 1 to " << n << " is = " << XOR1TN(n) << endl;
}
