#include <bits/stdc++.h>
using namespace std;
int cnt=1;

    void solve(int n){
        cout<<"Testace "<<cnt<<endl;
        cout<<"Input: ";cout<<n<<endl;
        cout<<"Output: "<<endl;
        for(int i=1;i<=10;i++){
            cout<<n<<" x "<<i<<" = "<<n*i<<endl;        
        }
    }

    int main(){
        solve(5);cnt++;
        solve(-21);cnt++;
        solve(2024);cnt++;
        solve(9876);cnt++;
        solve(-123);cnt++;
        solve(2006);cnt++;
        solve(143);cnt++;
        solve(534421);cnt++;
    }