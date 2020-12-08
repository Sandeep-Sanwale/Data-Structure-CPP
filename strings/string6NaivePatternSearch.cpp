#include <bits/stdc++.h>
#include <string>

using namespace std;

// void NaiveSearch(string text, string pat)
void NaiveSearch(char *text, char *pat)
{
    //     int n = text.length();
    //     int m = pat.length();

    int n = strlen(text);
    int m = strlen(pat);

    //Now fiding string

    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
            if (text[i + j] != pat[j])
                break;

        if (j == m)
            cout << "pattern found at index"
                 << " " << i << endl;
    }
}

int main()
{
    // string text, pat;
    // cin >> text;
    // cin >> pat;
    char text[] = "THIS IS A TEST TEXT";
    char pat[] = "TEST";
    NaiveSearch(text, pat);
}