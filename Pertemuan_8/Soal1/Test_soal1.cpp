#include <bits/stdc++.h>
using namespace std;

    long long fib(int x){
        if(x==0){
            return 0;
        }
        else if(x==1){
            return 1;
        }
        else{
            return fib(x-1)+fib(x-2);
        }
    }

string cek(string a, int x) {
    istringstream ss(a);
    vector<int> numbers;
    int num;
    while(ss>> num) {
        numbers.push_back(num);
    }
    string ans;
    for (int i=0;i<numbers.size();i++) {
        ans+=to_string(fib(numbers[i]));
        ans+=" ";
    }
    if (!ans.empty()) ans.pop_back();  
    return ans;
}

int main(){
    ifstream test("Test_soal1.txt");
	if(!test){
        cout<<"File input tidak ditemukan.";
        return 1;
	}
	else{
        int test_num=1, line=1,i=1,j=1;
        string input,output,n;
        while(getline(test,n) && getline(test,input) && getline(test,output)){
            // cout<<"test "<<test_num<<endl;
            // cout<<n<<endl;cout<<input<<endl;cout<<output<<endl;
            //Pengecekan antara s1 dan s2
            int x=stoi(n);
            string hasil=cek(input,x);
            // cout<<hasil<<endl;
            if(hasil==output){
                cout<<"Testcase "<<test_num<<" Success"<<endl;
            }
            else{
                cout<<"Testcase "<<test_num<<" Failed"<<endl;
            }
            test_num++;
        }   
        test.close();
    }
}