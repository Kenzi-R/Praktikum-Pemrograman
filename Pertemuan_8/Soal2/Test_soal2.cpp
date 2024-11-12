#include <bits/stdc++.h>
using namespace std;

    double rerata(const vector<long long>& vec, int n) {
        if (n == 0) {
            return 0;
        }
        else{
            return (vec[n - 1]+(n - 1)*rerata(vec, n - 1))/n;
        }
    }

    string cek(string a, int x) {
        istringstream ss(a);
        vector<long long> vec;
        long long num;
        while (ss>>num) {
            vec.push_back(num);
        }
        string ans=to_string(rerata(vec, x));
        if (!ans.empty()) ans.pop_back();  
        return ans;
    }

int main(){
    ifstream test("Test_soal2.txt");
	if(!test){
        cout<<"File input tidak ditemukan.";
        return 1;
	}
	else{
        int test_num=1, line=1,i=1,j=1;
        string input,output,n;
        while(getline(test,n) && getline(test,input) && getline(test,output)){
            int x=stoi(n);
            string hasil=cek(input,x);
            cout<<"test "<<test_num<<endl;
            cout<<n<<endl;cout<<input<<endl;cout<<output<<endl;
            cout<<hasil<<endl;
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