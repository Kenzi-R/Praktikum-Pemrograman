#include <bits/stdc++.h>
using namespace std;
vector<string>v;

    string jawab(){
        string ans;
        for(int i=1;i<=100;i++){
            if(i%3==0 && i%5!=0){   
                ans+="Fizz";
            }
            else if(i%3!=0 && i%5==0){
                ans+="Buzz";
            }
            else if(i%3==0 && i%5==0){
                ans+="FizzBuzz";
            }
            else{
                string temp=to_string(i);
                ans+=temp;
            }
        }
        return ans;
    }

    int main(){
    ifstream test("test_soal1.txt");
	if(!test){
        cout<<"File input tidak ditemukan.";
        return 1;
	}
	else{
		string input;
        getline(test>>ws,input);
        if(input==jawab()){
            cout<<"Testcase Success";
        }
        else{
            cout<<"Testcase Fail";
        }
    }
    test.close();
}