#include <bits/stdc++.h>
using namespace std;
int cnt=1;

    void solve(int n){
        cout<<"Testcase "<<cnt<<endl;
        cout<<"Input: ";
        cout<<n<<endl;
        long long ans=0;
        for(int i=1;i<=n;i++){
            ans+=i;         
        }
        cout<<"Output: ";cout<<ans;
        cout<<endl;
        cnt++;
    }

    int main(){
        solve(10);
        solve(123);
        solve(2024);
        solve(2109);
        solve(12345);
        solve(5);
        solve(999);
    }