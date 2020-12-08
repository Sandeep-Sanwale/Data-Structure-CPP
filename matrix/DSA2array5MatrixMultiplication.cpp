#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    cout << "enter rows and columns of first matrix :";
    cin >> r1 >> c1;
    cout << "enter rows and columns of second matrix :";
    cin >> r2 >> c2;
    int arr1[r1][c1], arr2[r2][c2];
    cout << "enter elements of your first array :";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "enter elements of your second array :";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int ans[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < r2; k++)
                ans[i][j] += arr1[i][k] * arr2[k][j];
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}