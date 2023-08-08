#include <bits/stdc++.h>
using namespace std;
void pattern_13(int n);
int main()
{
    int n;
    cout << "Input size : ";
    cin >> n;
    pattern_13(n);
}
void pattern_13(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ++count << " ";
        }
        cout << endl;
    }
}