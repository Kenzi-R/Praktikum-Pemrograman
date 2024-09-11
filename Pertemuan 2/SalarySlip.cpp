#include <bits/stdc++.h>
using namespace std;

    int main(){
        string name;
        //Input
        double salary,tax,installment,insurance,net;
        getline(cin,name);                      //Input nama
        cin>>salary>>installment>>insurance;    //Input Gaji Kotor, Cicilan ,dan Asuransi
        tax=salary*1/5;                         //Perhitungan pajak dari 20% Gaji Kotor
        net=salary-tax-installment-insurance;   //Perhitungan uang sisa setelah dipotong cicilan, asuransi dan pajak 

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