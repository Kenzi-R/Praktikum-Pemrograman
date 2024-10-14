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
            cout<<v[i]<<endl;
        }
    }

void Reverse() {
    string n;
    vector<string> v;
    cin >> n;
    if (n == "[") {
        while (cin >> n) {
            if (n != "]") {
                v.pb(n);
            } 
            else {
                int mx=v.size();
                // Reverse the vector using swap
                for (int i=0;i<mx/2;i++) {
                    swap(v[i], v[mx-i-1]);
                }
                // Output the reversed vector
                cout<<"[ ";
                for (int i=0;i<mx;i++) {
                    cout<<v[i]<<" ";
                }
                cout<<"]";
                cout<<endl;
            }
        }
    }
}


int main(){
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
    else{
        cout<<"Error"<<endl;
    }
}