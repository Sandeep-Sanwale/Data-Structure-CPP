#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, target;
    cout << "enter rows and columns of matrix :";
    cin >> n >> m;
    int arr[n][m];
    cout << "enter targeted element :";
    cin >> target;
    cout << "enter elements of your array :";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int st = 0, en = m - 1;
    bool found = 0;
    while (st < n and en >= 0)
    {
        if (arr[st][en] == target)
        {
            found = 1;
            break;
        }
        else if (arr[st][en] > target)
        {
            en--;
        }
        else
        {
            st++;
        }
    }
    cout << found;
}
