#include <bits/stdc++.h>
using namespace std;
void pattern_12(int n);
int main()
{
    int n;
    cout << "Input size : ";
    cin >> n;
    pattern_12(n);
}
void pattern_12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int s = 1; s <= 2 * ((n * 2) - (i * 2)); s++)
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