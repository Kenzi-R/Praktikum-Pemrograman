#include <bits/stdc++.h>
using namespace std;

    int main(){
        //string s;cin>>s;
    int a,b,c;
    cin>>a>>b>>c;
    int d=(b*b)-(4*a*c);
    double sq=sqrt(d);
    int x1,x2,x;
        if(d>0){
        x1=((-b)+(sqrt(sq)))/(2*a);
        x2=((-b)-(sqrt(sq)))/(2*a);
        cout<<"X1="<<x1<<endl;
        cout<<"X2="<<x2<<endl;
        }
        else if(d==0){
            x=(b)/(2*a);
            cout<<"X=";
            cout<<x;
        }
        else if(d<0){
            cout<<"No root Solution"<<endl;
            return 0;
        }
        
    }