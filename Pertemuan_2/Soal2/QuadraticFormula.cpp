#include <bits/stdc++.h>
using namespace std;

    int main(){
    double a,b,c;
    cout<<"input a=";cin>>a;    //Memasukan ax^2
    cout<<"input b=";cin>>b;    //Memasukan bx
    cout<<"input c=";cin>>c;    //Memasukan c
    
    double d=(b*b)-(4*a*c);     //Perhitungan nilai diskriminan
    double x1,x2,x;            
    //Jika Nilai Diskriminan besar dari 0
    if(d>0){                    
        x1=((-b)+(sqrt(d)))/(2*a);
        x2=((-b)-(sqrt(d)))/(2*a);
        cout<<"X1="<<x1<<endl;
        cout<<"X2="<<x2<<endl;
        }
    //Jika nilai diskriminan sama dengan 0
    else if(d==0){
            x=(-b)/(2*a);
            cout<<"X=";
            cout<<x;
        }
    //Jika nilai diskriminan kecil dari 0
    else if(d<0){
            cout<<"No root Solution"<<endl;
            return 0;
        }
    }