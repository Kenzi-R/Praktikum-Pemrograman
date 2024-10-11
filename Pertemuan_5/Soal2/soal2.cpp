#include <bits/stdc++.h>
#define pb push_back
using namespace std;

    int main(){
        int n;
        vector<int>v;
        //Input nilai kedalam vector
        while(cin>>n){
            v.pb(n);
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

// 0 1 2 3 4
// 1 2 3 4 5

// 9 5 6 7 3