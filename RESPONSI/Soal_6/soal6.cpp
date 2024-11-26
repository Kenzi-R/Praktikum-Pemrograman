#include <bits/stdc++.h>
using namespace std;

    int main(){
        cout<<"Masukkan nilai angka yang ingin dicari faktorialnya:";
        long long x;cin>>x;
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