#include<bits/stdc++.h>
using namespace std;
void pattern5(int n);
int main(){
    int n;
    cin>>n;
    pattern5(n);
}
void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }cout<<"\n";
    }
}