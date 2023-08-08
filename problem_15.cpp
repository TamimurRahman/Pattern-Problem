#include <bits/stdc++.h>
using namespace std;
void pattern_14(int n);
int main()
{
    int n;
    cout << "Input size : ";
    cin >> n;
    pattern_14(n);
}
void pattern_14(int n)
{
    char count = 65 ;
    for (int i = 1; i <= n; i++)
    {
        char count = 65 ;
        for (int j = 1; j <= i; j++)
        {
            cout << count++;
        }
        cout << endl;
    }
}