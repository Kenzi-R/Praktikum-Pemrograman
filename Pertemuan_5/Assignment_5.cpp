#include <bits/stdc++.h>
#define pb push_back
using namespace std;


void Fizzbuzz(){
    vector<string>v;
    for(int i=1;i<=100;i++){
        //Mengecek bilangan habis dibagi 3 tapi tidak habis dibagi 5
        if(i%3==0 && i%5!=0){   
            v.pb("Fizz");
        }
        //Mengecek bilangan habis dibagi 5 tapi tidak habis dibagi 3
        else if(i%3!=0 && i%5==0){
            v.pb("Buzz");
        }
        //Mengecek bilangan habis dibagi 3 dan 5
        else if(i%3==0 && i%5==0){
            v.pb("FizzBuzz");
        }
        //Mengecek bilangan jika tidak habis dibagi 3 atau 5
        else{
            string temp=to_string(i);
            v.pb(temp);
        }
    }
        //Output semua isi array
        for(int i=0;i<100;i++){
            cout<<v[i];
            cout<<endl;
        }
    }

void Reverse(){
        //Deklarasi
        int n;
        vector<int>v;
        //Panjang Vektor
        cout<<"Input Panjang:";
        cin>>n;
        //Input nilai kedalam vector
        cout<<"Input Isi Vector\n";
        for(int i=0;i<n;i++){
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
        cout<<"Reversed Vector\n";
        for(int i=0;i<mx;i++){
            cout<<v[i]<<" ";
        }
    }

int main(){
    bool ya=1;
    while(ya){
        cout<<"Ketik Nomor Program yang ingin dijalankan"<<endl;
        cout<<"1. Fizzbuzz"<<endl;
        cout<<"2. Reversing Array"<<endl;
        cout<<"Nomor:";
        int t;cin>>t;
        if(t==1){
            Fizzbuzz();
            cout<<endl;
        }
        else if(t==2){
            Reverse();
            cout<<endl;
        }
        //Ingin mengulangi Tes lagi atau tidak
        string s;
        cout<<"Ingin dilanjutkan? "<<endl<<"Ketik Ya/Tidak"<<endl;
        cin>>s;
        if(s == "Ya"){
            ya=1;
        }
        else{
            ya=0;
        }
    }
}