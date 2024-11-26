#include <bits/stdc++.h>
using namespace std;

    void solve(string s){
        stringstream ss(s);
        int mx=INT_MIN;
        int res;
        while(ss >> res){
            if(res>mx){
                mx=res;
            }
        }
        cout<<"Nilai maksimum dari daftar diatas adalah "<<mx<<endl;
    }

    int main(){
        solve("10 18 26 12 62 12 71 8");
        solve("-12 10 26 -3 100 999");
        solve("-5 -10 -7 -11 -1 -122");
        solve("-1 0 1");
        solve("1 2 3 4 5 6 99 7 8 9");
    }