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
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            if (k > 1)
            {
                cout << " ";
            }
            cout << k;

        }
        cout << endl;
    }
}