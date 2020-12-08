#include <algorithm>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string s = "sanjdsksdhhgd";
    //cout << 'a' - 'A'; //32 so we know that the diffrence among capital latters and smalls are 32

    //so Now   we convert the lower case into upper case

    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (s[i] >= 'a' && s[i] <= 'z')
    //         s[i] -= 32;
    // }
    // cout << s << endl;

    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (s[i] >= 'A' && s[i] <= 'Z')
    //     {
    //         s[i] += 32;
    //     }
    // }
    // cout << s;

    //if we use inBuilt function so the inBuilt function is :
    transform(s.begin(), s.end(), s.begin(), ::toupper); //to convet in upper //(strting position ,end position ,where to start ,in which to convert)
    cout << s << endl;

    //for converting in lower case:
    transform(s.begin(), s.end(), s.begin(), ::towlower);
    cout << s;
}