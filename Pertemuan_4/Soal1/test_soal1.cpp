#include <bits/stdc++.h>
using namespace std;

string solve(string input){
    long long n,ans=0;
    n=stoi(input);
    for(int i=1;i<=n;i++){
      ans+=i;         
    }
    string cek = to_string(ans);
    return cek;
}

int main(){
    ifstream test("test_soal1.txt");
	if(test.is_open()){
		string input,output;
		int test_num=1;
		while (test>>input&&getline(test>>ws,output))
        {
            if(solve(input)==output){
                cout<<"Test "<<test_num<<" passed!"<<endl;
                input="";
                output="";
            }
            else{
                cout <<"Test "<<test_num<<" not as expected"<<endl;
                cout<<"Expected output : "<<solve(input)<<endl;
                cout<<"Output : "<<output<<endl;
            }
            test_num++;
        }
        
	}
	else{
		cout<<"File input tidak ditemukan.";
	}
    test.close();
}