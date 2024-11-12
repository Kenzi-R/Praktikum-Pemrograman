#include <bits/stdc++.h>
using namespace std;

    long long fib(int x){
        if(x==0){
            return 0;
        }
        else if(x==1){
            return 1;
        }
        else{
            return fib(x-1)+fib(x-2);
        }
    }

    int main(){
        cout<<"Masukkan urutan bilangan fibonaci yang ingin dicari adalah ";
        int n;cin>>n;
        cout<<"Bilangan fibonaci pada urutan ke-"<<n<<" adalah ";
            cout<<fib(n)<<endl;
    }