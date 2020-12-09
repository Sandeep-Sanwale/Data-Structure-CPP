#include <bits/stdc++.h>
#include <string>
#define d 256

using namespace std;

void Search(char pat[], char text[], int q)
{
    int m = strlen(pat);
    int n = strlen(text);
    int p = 0; //hash value of pattern
    int t = 0; //hah value of text
    int h = 1; //just we intilize hash value from 1

    //hash value of h would be pow(d,m-1)%q

    for (int i = 0; i < m - 1; i++)
    {
        h = (h * d) % q;
    }
    //Now calculate the hash value of pattern and first window of text
    for (int i = 0; i < m; i++)
    {
        p = (d * p + pat[i]) % q;
        t = (d * t + text[i]) % q;
    }

    //Now slid the pattern over text one by one
    int i, j;

    for (i = 0; i < n; i++)
    {
        //Now chack hash values of pattern and current window of text if it is equal then only check  for characters

        if (p == t)
        {
            for (j = 0; j < m; j++)
            {
                if (text[i + j] != pat[j])
                    break;
            }

            // if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1]
            if (j == m)
                cout << "pattern Found at index  " << i << endl;
        }

        // Calculate hash value for next window of text: Remove
        // leading digit, add trailing digit

        if (i < n - m)
        {
            t = (d * (t - text[i] * h) + text[i + m]) % q;
        }

        // We might get negative value of t, converting it
        // to positive
        if (t < 0)
            t = t + q;
    }
}

int main()
{
    char text[] = "GEEKS FOR GEEKS";
    char pat[] = "GEEK";
    int q = 101; //prime number we can take any prime number but we generally used 101
    Search(pat, text, q);
}
