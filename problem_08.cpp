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
        for (int k = i; k <= n; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}