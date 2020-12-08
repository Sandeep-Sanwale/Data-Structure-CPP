#include <algorithm>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string s = "88347383";
    //Now we have to sort this string in descending order to get the greatest number throgh this string

    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;
}