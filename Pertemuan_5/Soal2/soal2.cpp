#include <bits/stdc++.h>
#define pb push_back
using namespace std;

    int main(){
        int n;cin>>n;
        vector<int>v;
        //Input nilai kedalam vector
        while(n--){
            int x;cin>>x;
            v.pb(x);
        }
        int mx=v.size();
        //Reversing array
        for(int i=0;i<=mx/2;i++){
            int temp=v[i];
            v[i]=v[mx-i-1];
            v[mx-i-1]=temp;
        }
        //Output semua isi dalam array
        for(int i=0;i<mx;i++){
            cout<<v[i]<<" ";
        }
    }
