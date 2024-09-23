#include <bits/stdc++.h>
using namespace std;

    void solve(int a,int b,int c){
        cout<<"inputkan bilangan 1 : ";cout<<a;
        cout<<endl;
        cout<<"inputkan bilangan 2 : ";cout<<b;
        cout<<endl;
        cout<<"inputkan bilangan 3 : ";cout<<c;
        cout<<endl;
        if(a>b && a>c){    
            cout<<"bilangan terbesar adalah : "<<a;
        }
        else if(b>a && b>c){
            cout<<"bilangan terbesar adalah : "<<b;
        }
        else if(c>a && c>b){
            cout<<"bilangan terbesar adalah : "<<c;
        }
        else if(a==b || a==c){
            cout<<"bilangan terbesar adalah : "<<a;
        }
        else if(b==c){
            cout<<"bilangan terbesar adalah : "<<b;
        }
    }

    int main(){
        cout<<"Jika hanya ada 1 bilangan terbesar"<<endl;
        solve(1,2,3);cout<<endl;
        solve(15,7,22);cout<<endl;
        solve(9999,1,-34);cout<<endl;
        cout<<"Jika ada 2 bilangan terbesar"<<endl;
        solve(1,1,-1);cout<<endl;
        solve(777,777,123);cout<<endl;
        solve(-11,-11,-100);cout<<endl;
        cout<<"Jika nilai ke 3 angka sama"<<endl;
        solve(1,1,1);cout<<endl;
        solve(1000,1000,1000);cout<<endl;
        solve(-1,-1,-1);cout<<endl;
    }