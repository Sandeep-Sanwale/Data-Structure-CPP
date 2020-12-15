#include <bits/stdc++.h>

using namespace std;

// EXPLANATION-    count=0;
// n=19=(01011)                n=18(01010)           n=16(01000)
// n-1=18=(01010)              n-1=17(01000)         n-1=(00111)
// n=n&(n-1)=01010=18          n&n-1=(01000)=16      n&n-1=00000=0 //stop now
//count=1                        count=2              count=3
//so in 19 three(3) ones persent;
int NumberOfones(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }

    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << NumberOfones(n);
    return 0;
}