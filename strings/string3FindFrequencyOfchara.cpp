#include <algorithm>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string s = "sandeep";

    int freq[26];
    for (int i = 0; i < 26; i++)
        freq[i] = 0;

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 1)
        {
            printf("%c= %d\n", i + 'a', freq[i]);
        }
    }
}
