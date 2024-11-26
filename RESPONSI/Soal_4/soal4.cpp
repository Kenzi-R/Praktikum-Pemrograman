#include <bits/stdc++.h>
using namespace std;

    int main(){
        string s;
        cout<<"Masukkan daftar angka: ";
        getline(cin,s);
        stringstream ss(s);
        int mx=INT_MIN;
        int res;
        while(ss >> res){
            if(res>mx){
                mx=res;
            }
        }
        cout<<"Nilai maksimum dari daftar diatas adalah "<<mx<<endl;
    }