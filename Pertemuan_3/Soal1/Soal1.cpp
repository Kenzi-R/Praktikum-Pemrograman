#include <bits/stdc++.h>
using namespace std;

    int main(){
    double a,b,c;
    cout<<"input a=";cin>>a;
    cout<<"input b=";cin>>b;
    cout<<"input c=";cin>>c;
    
    double d=(b*b)-(4*a*c);
    double x1,x2,x;
    
    if(d>0){
        x1=((-b)+(sqrt(d)))/(2*a);
        x2=((-b)-(sqrt(d)))/(2*a);
        cout<<"Bersifat rill dan berbeda"<<endl;
        cout<<"X1="<<x1<<" dan ";
        cout<<"X2="<<x2<<endl;
        }
    else if(d==0){
            x=(-b)/(2*a);
            cout<<"Bersifat rill dan sama"<<endl;
            cout<<"X1=";
            cout<<x<<endl;
            cout<<"X2=";
            cout<<x;
        }
    else if(d<0){
            cout<<"Bersifat imajiner"<<endl;
            return 0;
        }
    }