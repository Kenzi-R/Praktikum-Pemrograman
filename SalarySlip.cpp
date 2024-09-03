#include <bits/stdc++.h>
using namespace std;

    int main(){
        string name;
        double salary,tax,installment,insurance,net;
        getline(cin,name);
        cin>>salary>>installment>>insurance;
        tax=salary*1/5;
        net=salary-tax-installment-insurance;
        //Output
        cout<<"Payslip for Employee"<<endl;
        cout<<"---------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Gross Salary: Rp"<<salary<<",00"<<endl;
        cout<<"Tax (20%): Rp"<<tax<<",00"<<endl;
        cout<<"Installment: Rp"<<installment<<",00"<<endl;
        cout<<"Insurance: Rp"<<insurance<<",00"<<endl;
        cout<<"Net Salary: Rp"<<net<<",00"<<endl;
    }




