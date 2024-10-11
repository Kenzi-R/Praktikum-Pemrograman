#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector<string>v;

    void masuk(string input){
        string temp="";
        for(int i=0;i<input.length();i++){
            if(input[i]!=' '){
                temp+=input[i];
            }
            else{
                v.pb(temp);
                temp="";
            }
            if(i==input.length()-1){
                v.pb(temp);
            }
        }
    }

    int main(){
    ifstream test("test_soal2.txt");
	if(!test){
        cout<<"File input tidak ditemukan.";
        return 1;
	}
	else{
		string input,output;
		int test_num=1;
        while(getline(test>>ws,input)){
            cout<<"Test "<<test_num<<endl;
            cout<<"Input= "<<input<<endl;
            masuk(input);
            cout<<"Vector=";
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            test_num++;
        }
	}
    test.close();
}