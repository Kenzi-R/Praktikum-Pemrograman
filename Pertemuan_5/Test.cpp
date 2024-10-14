#include <bits/stdc++.h>
#define pb push_back
using namespace std;

    string Fizzbuzz(){
        vector<string>v;
        string temp;
        for(int i=1;i<=100;i++){
        //Mengecek bilangan habis dibagi 3 tapi tidak habis dibagi 5
        if(i%3==0 && i%5!=0){   
            v.pb("Fizz");
        }
        //Mengecek bilangan habis dibagi 5 tapi tidak habis dibagi 3
        else if(i%3!=0 && i%5==0){
            v.pb("Buzz");
        }
        //Mengecek bilangan habis dibagi 3 dan 5
        else if(i%3==0 && i%5==0){
            v.pb("FizzBuzz");
        }
        //Mengecek bilangan jika tidak habis dibagi 3 atau 5
        else{
            string temp=to_string(i);
            v.pb(temp);
        }
    }
        for(int i=0;i<100;i++){
            temp+=v[i];
            temp+='\n';
        }
        return temp;
    }

    string reverse(string s) {
        string ans;
        stringstream ss(s);
        int num;
        vector<int>v;
        while(ss >> num) {
            v.push_back(num);
        }
        for (int i=v.size()-1;i>= 0;i--) {
            ans+=to_string(v[i]);
            ans+=" ";
        }
        return ans;
    }
    
    int main(){
    ifstream test("Test.txt");
	if(!test){
        cout<<"File input tidak ditemukan.";
        return 1;
	}
	else{
        int test_num=1,idx=1;
		bool fizzbuzz=0;
        string input,output,res;
        while(getline(test,input)){
            //Fizzbuzz
            if(!fizzbuzz){
                output+=input;output+="\n";
                if(idx==100){
                    if(output==Fizzbuzz()){
                        cout<<"Testcase "<<test_num<<" Success"<<endl;
                    }
                    else{
                        cout<<"Testcase "<<test_num<<" Fail"<<endl;
                    }
                    idx=0;
                    fizzbuzz=1;
                    test_num++;
                }
                idx++;
            }
            //Reverse
            else{  
            if(idx==1){
                res=input;
                idx++;
            }
            else{
                bool ya=1;
                output=input;
                string cek=reverse(res);
                for(int i=0;i<output.length()-1;i++){
                    if(cek[i]!=output[i]){
                        ya=0;
                        cout <<"Testcase "<<test_num<<" Fail\n";
                        break;
                    } 
                }    
                if(ya){
                    cout<<"Testcase "<<test_num<<" Success\n";
                    }    
                idx=1;
                test_num++; 
                }   
            }  
	    }
        test.close();
    }
}