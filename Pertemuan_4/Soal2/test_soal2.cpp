#include <bits/stdc++.h>
using namespace std;

    string solve(string input){
        long long n=stoi(input); 
        string ans; 
        for(int i=1;i<=10;i++){  
            ans=ans+input;        
            ans=ans+" x ";
            ans=ans+to_string(i);
            ans=ans+" = ";
            long long sum=n*i;
            ans=ans+to_string(sum);
            ans+='\n';
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
		string input,output,temp;
		int test_num=1,line=1;
		while (getline(test,temp)){
            if(line==1){
                input=temp;  
                line++;
            }

            else if(line==11){
                output+=temp;
                output+='\n';
                if(solve(input)==output){
                    cout<<"Test "<<test_num<<" passed!"<<endl;
                    line=1;
                    output="";
                    temp="";
                 }
                else{
                    cout <<"Test "<<test_num<<" not as expected"<<endl;
                    cout<<"Expected output : "<<endl<<solve(input)<<endl;
                    cout<<"Output : "<<endl<<output<<endl;
                    line=1;
                    output="";
                    temp="";
                }
            test_num++;
            }
         
            else{
               output+=temp;
                output+='\n';
                line++;
            }
           
        }
	}
    test.close();
}

// 5            baris 1=input
// 5 x 1 = 5        
// 5 x 2 = 10
// 5 x 3 = 15
// 5 x 4 = 20
// 5 x 5 = 25
// 5 x 6 = 30
// 5 x 7 = 35
// 5 x 8 = 40
// 5 x 9 = 45
// 5 x 10 = 50  baris 11=output