#include <bits/stdc++.h>
using namespace std;

    int main(){
        string name;
        int salary,tax,installment,insurance,net;
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


// Payslip for Employee
// ---------------------
// Name: John Doe
// Gross Salary: Rp15.000.000,00
// Tax (20%): Rp3.000.000,00
// Installment: Rp200.000,00
// Insurance: Rp150.000,00
// Net Salary: Rp11.650.000,00

// Kenji Ratanaputra
// 15000000
// 200000
// 150000