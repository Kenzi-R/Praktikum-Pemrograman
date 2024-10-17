#include <bits/stdc++.h>
using namespace std;

    struct swalayan{
        string kode;
        string nama;
        int harga;
        int jumlah;
    };

    string rata(swalayan *data,int x){
        double med=0;
        for(int i=1;i<=x;i++){
           med+=data[i].harga;
        }
        med/=x;
        stringstream ss;
        ss<<fixed<<setprecision(2)<<med;
        string ans=ss.str();
        return ans;
    }

    string ttl(swalayan *data,int x){
        long long sum=0;
        for(int i=1;i<=x;i++){
           sum+=data[i].jumlah;
        }
        string ans=to_string(sum);
        return ans;
    }

    void output(bool ans,int test_num){
        if(ans){
            cout<<"Testcase "<<test_num<<" Success"<<endl;
        }
        else{
            cout<<"Testcase "<<test_num<<" Failed"<<endl;
        }
    }

int main(){
    swalayan data[55];
    ifstream test("Test.txt");
	if(!test){
        cout<<"File input tidak ditemukan.";
        return 1;
	}
	else{
        int test_num=1, line=1,n,i=1,j=1;
        string input;
        while(getline(test,input)){
            // cout<<"Input "<<line<<" = "<<input<<endl;
            if(line==1){
                n=stoi(input);
            }
            //Input
            else if(line<=(1+(n*4))){
                // cout<<"Masuk="<<line<<endl;

                if(i==1){
                    data[j].kode=input;
                    i++;
                }
                else if(i==2){
                    data[j].nama=input;
                    i++;
                }
                else if(i==3){
                    data[j].harga=stoi(input);
                    i++;
                }
                else if(i==4){
                    data[j].jumlah=stoi(input);
                    i=1;
                    j++;
                    // cout<<i<<" "<<j<<endl;
                }
            }
            // Hasil
            else{
                bool yes=true;
                if(line%2==0){
                    if(ttl(data,n)!=input){
                        yes=false;
                    }
                }   
                else{
                    if(rata(data,n)!=input){
                        cout<<rata(data,n)<<endl;
                        yes=false;
                    }
                    output(yes,test_num);
                    test_num++;                  
                    i=1,j=1,line=0;          
                }
            }
        line++;
        }   
        test.close();
    }
}