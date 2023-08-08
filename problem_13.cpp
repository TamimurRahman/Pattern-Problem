#include <bits/stdc++.h>
using namespace std;
void pattern_10(int n);
int main()
{
    int n;
    cout << "Input size : ";
    cin >> n;
    pattern_10(n);
}
void pattern_10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*(n-i); j++)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}