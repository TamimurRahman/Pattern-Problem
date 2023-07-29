#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Input pattern row and cloumn size : ";
    int row, col;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}