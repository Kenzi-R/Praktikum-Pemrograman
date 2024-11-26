#include <bits/stdc++.h>
using namespace std;

    void solve(long long x){
        if(x==0){
            cout<<"Nilai faktorial dari 0! adalah 1"<<endl;
        }
        else if(x<0){
            cout<<"Tidak ada nilai faktorial dari "<<x<<"!"<<endl;
        }
        else{
            long long ans=1;
            for(int i=1;i<=x;i++){
                ans*=i;
            }
            cout<<"Nilai faktorioal dari "<<x<<"! adalah "<<ans<<endl;
        }
    }

    int main(){
        solve(-1);
        solve(0);
        solve(1);
        solve(2);
        solve(3);
        solve(4);
        solve(5);
        solve(6);
        solve(7);
        solve(8);
    }