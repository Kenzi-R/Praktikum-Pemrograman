#include <bits/stdc++.h>
#define pb push_back
using namespace std;

    string soal(string s){
        string ans;
        int mx=s.length();
        int baris=1,temp=0;
        for(int i=mx-1;i>=0;i--){
            if(s[i]==' '){
                string y=to_string(temp);
                ans+=y;
                ans+=" ";
                temp=0;
                baris=1;
            }
            else{
                char y=s[i];int p=y-'0';
                temp+=(p*baris);
                baris*=10;
                // cout<<i<<" "<<p<<" "<<y<<" "<<temp<<endl;
            }
            if(i==0){
                string y=to_string(temp);
                ans+=y;
            }
        }
        return ans;
    }

    int main(){
    ifstream test("test_soal2.txt");
	if(!test){
        cout<<"File input tidak ditemukan.";
        return 1;
	}
	else{
        int test_num=1;
		string input,output;
        while (getline(test>>ws,input)&&getline(test>>ws,output)){
            if(soal(input)==output){
                cout<<"Test "<<test_num<<" Success\n";
            }
            else{
                cout <<"Test "<<test_num<<" Fail\n";
            }
            // cout<<input<<endl;
            // cout<<output<<endl;
            // cout<<soal(input)<<endl;
            test_num++;
        }
	}
    test.close();
}