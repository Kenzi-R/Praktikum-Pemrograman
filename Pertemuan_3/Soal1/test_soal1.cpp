#include <bits/stdc++.h>
using namespace std;

    void solve(double a,double b,double c){
    cout<<"input a=";cout<<a<<",";
    cout<<"input b=";cout<<b<<",";
    cout<<"input c=";cout<<c<<endl;  
    double d=(b*b)-(4*a*c);     
    double x1,x2,x;            
    if(d>0){                    
        x1=((-b)+(sqrt(d)))/(2*a);
        x2=((-b)-(sqrt(d)))/(2*a);
        cout<<"X1="<<x1<<endl;
        cout<<"X2="<<x2<<endl;
        }
    else if(d==0){
            x=(-b)/(2*a);
            cout<<"X=";
            cout<<x;
            cout<<endl;
        }
    else if(d<0){
            cout<<"No root Solution"<<endl;
        }
    }
     
    int main(){
        cout<<"Testcase when D=0"<<endl;
        solve(1,2,1);
        solve(4,16,16);
        cout<<"Testcase when D>0"<<endl;
        solve(1,-2,-15);
        solve(6,5,-6);
        cout<<"Testcase when D<0"<<endl;
        solve(1,1,1);
    }