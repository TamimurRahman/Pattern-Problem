#include <bits/stdc++.h>
using namespace std;
void pattern(int n);
int main()
{
    int n;
    cout << "Input size : ";
    cin >> n;
    pattern(n);
}
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = (2 * n) - i; j >= i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
}