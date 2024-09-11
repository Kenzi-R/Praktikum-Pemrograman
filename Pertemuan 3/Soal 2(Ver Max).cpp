#include <bits/stdc++.h>
using namespace std;

    int main(){
        int a,b,c;
        cout<<"inputkan bilangan 1 : ";cin>>a;
        cout<<"inputkan bilangan 2 : ";cin>>b;
        cout<<"inputkan bilangan 3 : ";cin>>c;
        int ans=max(a,max(b,c));
        cout<<"bilangan terbesar adalah : ";
        cout<<ans;
    }