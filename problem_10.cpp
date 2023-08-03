#include <bits/stdc++.h>
using namespace std;
void pattern_09(int n);
int main()
{
    int n;
    cout << "Input size : ";
    cin >> n;
    pattern_09(n);
}
void pattern_09(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            if (k == i)
            {
                cout << "*";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = i; k <= n; k++)
        {
            if (k == n)
            {
                cout << "*";
            }

            else
            {
                cout << "* ";
            }
        }
        cout << "\n";
    }
}