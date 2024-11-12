#include <bits/stdc++.h>
#define pb push_back
using namespace std;

    double rerata(long long vec[],int n){
        if(n==0){
            return 0;
        }
        else if(n==1){
            return vec[0]/n;
        }
        else{
            return (vec[n - 1] + (n - 1) * rerata(vec, n - 1)) / n;
        }
    }

    int main(){
        cout<<"Masukkan banyak bilangan yang ingin dimasukkan = ";
        int n;cin>>n;
        long long vec[n+1];
        for(int i=0;i<n;i++){
            cout<<"Masukkan nilai yang ingin dihitung rata ratanya = ";
            cin>>vec[i];
        }
        cout<<"Rata rata dari bilangan diatas adalah = ";
        cout<<rerata(vec,n)<<endl;
    }

// 1 2 3 4 5 6
// 3.5
