#include <bits/stdc++.h>
using namespace std;

    int main(){
        string name;
        //Input
        int salary,tax,installment,insurance,net;
        getline(cin,name);                      //Input nama
        cin>>salary>>installment>>insurance;    //Input Gaji Kotor, Cicilan ,dan Asuransi
        tax=salary/5;                         //Perhitungan pajak dari 20% Gaji Kotor
        net=salary-tax-installment-insurance;   //Perhitungan uang sisa setelah dipotong cicilan, asuransi dan pajak 

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
