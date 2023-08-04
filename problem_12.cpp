#include <bits/stdc++.h>
using namespace std;
void pattern_11(int n);
int main()
{
    int n;
    cout << "Input size : ";
    cin >> n;
    pattern_11(n);
}
void pattern_11(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++){
            if(i%2==0){
                if(j%2==0){
                    cout<<"1 ";
                }else{
                    cout<<"0 ";
                }
            }else{
                if(j%2!=0){
                    cout<<"1 ";
                }else{
                    cout<<"0 ";
                }
            }
        }cout<<endl;
    }
}