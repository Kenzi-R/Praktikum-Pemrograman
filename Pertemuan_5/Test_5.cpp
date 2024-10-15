#include <bits/stdc++.h>
#define pb push_back
using namespace std;

    string Fizzbuzz(){
        string temp;
        for(int i=1;i<=100;i++){
        //Mengecek bilangan habis dibagi 3 tapi tidak habis dibagi 5
        if(i%3==0 && i%5!=0){   
            temp+="Fizz";
        }
        //Mengecek bilangan habis dibagi 5 tapi tidak habis dibagi 3
        else if(i%3!=0 && i%5==0){
            temp+=("Buzz");
        }
        //Mengecek bilangan habis dibagi 3 dan 5
        else if(i%3==0 && i%5==0){
            temp+=("FizzBuzz");
        }
        //Mengecek bilangan jika tidak habis dibagi 3 atau 5
        else{
            string res=to_string(i);
            temp+=(res);
        
        }
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
    ifstream test("test.txt");
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
                output+=input;
                bool cek=1;
                string temp=Fizzbuzz();
                int x=output.length();
                for(int i=0;i<x-1;i++){
                    if(output[i]!=temp[i]){
                        cek=0;
                    }
                }
                    if(cek){
                        cout<<"Testcase "<<test_num<<" Success"<<endl;
                    }
                    else{
                        cout<<"Testcase "<<test_num<<" Fail"<<endl;
                    }
                    idx=0;
                    fizzbuzz=1;
                    test_num++;
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