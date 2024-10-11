#include <bits/stdc++.h>
using namespace std;
vector<string>v;

int main(){
    for(int i=1;i<=100;i++){
        //Mengecek bilangan habis dibagi 3 tapi tidak habis dibagi 5
        if(i%3==0 && i%5!=0){   
            v.push_back("Fizz");
        }
        //Mengecek bilangan habis dibagi 5 tapi tidak habis dibagi 3
        else if(i%3!=0 && i%5==0){
            v.push_back("Buzz");
        }
        //Mengecek bilangan habis dibagi 3 dan 5
        else if(i%3==0 && i%5==0){
            v.push_back("FizzBuzz");
        }
        //Bilangan yang tidak habis 3 atau 5
        else{
            string temp=to_string(i);
            v.push_back(temp);
        }
    }
        //Output semua isi array
        for(int i=0;i<100;i++){
            cout<<v[i];
        }
    }
