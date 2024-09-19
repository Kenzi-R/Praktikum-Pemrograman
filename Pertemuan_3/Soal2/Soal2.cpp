#include <bits/stdc++.h>
using namespace std;

    int main(){
        int a,b,c;
        cout<<"inputkan bilangan 1 : ";cin>>a;
        cout<<"inputkan bilangan 2 : ";cin>>b;
        cout<<"inputkan bilangan 3 : ";cin>>c;
        //Mengecek apakah bilangan 1 adalah bilangan terbesar
        if(a>b && a>c){    
            cout<<"bilangan terbesar adalah : "<<a;
        }
        //Mengecek apakah bilangan 2 adalah bilangan terbesar
        else if(b>a && b>c){
            cout<<"bilangan terbesar adalah : "<<b;
        }
        //Mengecek apakah bilangan 3 adalah bilangan terbesar
        else if(c>a && c>b){
            cout<<"bilangan terbesar adalah : "<<c;
        }
        //Mengecek apakah bilangan 1 dan 2 atau 
        //bilangan 1 dan 3 adalah bilangan terbesar
        else if(a==b || a==c){
            cout<<"bilangan terbesar adalah : "<<a;
        }
        //Mengecek apakah bilangan 2 dan 3 adalah bilangan terbesar
        else if(b==c){
            cout<<"bilangan terbesar adalah : "<<b;
        }
    }