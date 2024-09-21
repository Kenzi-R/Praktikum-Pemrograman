#include <bits/stdc++.h>
using namespace std;
string name;
long long salary,tax,installment,insurance,net;

    void output(){
        //Checking
        tax=salary/5;
        net=salary-tax-installment-insurance;
        //Output
        cout<<"Payslip for Employee"<<endl;
        cout<<"---------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Gross Salary: "<<salary<<endl;
        cout<<"Tax (20%): "<<tax<<endl;
        cout<<"Installment: "<<installment<<endl;
        cout<<"Insurance: "<<insurance<<endl;
        cout<<"Net Salary: "<<net<<endl;
    }

    bool check(int n1,int n2){
        if(tax==n1 && net==n2){
            return true;
        }
        else{
            return false;
        }        
    }

    int main(){
        //Input
        cout<<"Input Name: ";getline(cin,name);
        cout<<"Input Gross Salary: ";cin>>salary;
        cout<<"Input Installment: ";cin>>installment;
        cout<<"Input Insurance: ";cin>>insurance;
        //TC
        int expected_tax,expected_net;
        cout<<"Input Expected Tax: ";cin>>expected_tax; 
        cout<<"Input Expected Net: ";cin>>expected_net;
        output();
        //Output
        if(check(expected_tax,expected_net)){
            cout<<"Testcase true"<<endl;
        }
        else{
            cout<<"Testcase false"<<endl;
        }
    }   
