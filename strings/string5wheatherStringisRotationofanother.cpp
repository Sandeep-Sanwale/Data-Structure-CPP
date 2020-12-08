#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size())
        return 0;

    string temp = s1 + s1;
    //cout << temp;
    //Now creating substring
    int n = temp.find(s2) != string::npos;
    cout << n;
}