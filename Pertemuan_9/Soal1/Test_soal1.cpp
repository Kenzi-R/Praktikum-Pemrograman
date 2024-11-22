#include <bits/stdc++.h>
using namespace std;

    struct mhs{
        string NISN;
        string nama;
        int nilai;
    };

    void insert_nilai(mhs data[]){
        for(int i=0;i<7;i++){
            int j=i;
            while(j>=1 && data[j].nilai < data[j-1].nilai){
                swap(data[j],data[j-1]);
                j--;
            }
        }
        // Output
        for(int i=0;i<7;i++){
            cout<<data[i].NISN<<" ";
            cout<<data[i].nama<<" ";
            cout<<data[i].nilai<<endl;;
        }
    }

    void insert_NISN(mhs data[]){
        for(int i=0;i<7;i++){
            int j=i;
            while(j>=1 && data[j].NISN < data[j-1].NISN){
                swap(data[j],data[j-1]);
                j--;
            }
        }
        // Output
        for(int i=0;i<7;i++){
            cout<<data[i].NISN<<" ";
            cout<<data[i].nama<<" ";
            cout<<data[i].nilai<<endl;;
        }
    }

    void bubble_nilai(mhs data[]){
        for(int i=0;i<7;i++){
            for(int j=0;j<7;j++){
                if(j-1>=0 && data[j].nilai < data[j-1].nilai){
                    swap(data[j],data[j-1]);
                }
            }
        }
        // Output
        for(int i=0;i<7;i++){
            cout<<data[i].NISN<<" ";
            cout<<data[i].nama<<" ";
            cout<<data[i].nilai<<endl;;
        }
    }

    void bubble_NISN(mhs data[]){
        for(int i=0;i<7;i++){
            for(int j=0;j<7;j++){
                if(j-1>=0 && data[j].NISN < data[j-1].NISN){
                    swap(data[j],data[j-1]);
                }
            }
        }
        // Output
        for(int i=0;i<7;i++){
            cout<<data[i].NISN<<" ";
            cout<<data[i].nama<<" ";
            cout<<data[i].nilai<<endl;;
        }
    }

    void select_nilai(mhs data[]){
        for(int i=0;i<7;i++){
            int temp=i;
            for(int j=i+1;j<7;j++){
                if(data[temp].nilai > data[j].nilai){
                    temp=j;
                }
            }
            swap(data[temp],data[i]);
        }
        // Output
        for(int i=0;i<7;i++){
            cout<<data[i].NISN<<" ";
            cout<<data[i].nama<<" ";
            cout<<data[i].nilai<<endl;;
        }
    }

    void select_NISN(mhs data[]){
        for(int i=0;i<7;i++){
            int temp=i;
            for(int j=i+1;j<7;j++){
                if(data[temp].NISN > data[j].NISN){
                    temp=j;
                }
            }
            swap(data[temp],data[i]);
        }
        // Output
        for(int i=0;i<7;i++){
            cout<<data[i].NISN<<" ";
            cout<<data[i].nama<<" ";
            cout<<data[i].nilai<<endl;;
        }
    }

    void soal1(){
        mhs data[]{
            {"9960312699", "Handi Ramadhan", 90},
            {"9963959682", "Rio Alfandra", 55},
            {"9950310962", "Ronaldo Valentino Uneputty", 80},
            {"9970272750", "Achmad Yaumil Fadjri R.", 60},
            {"9970293945", "Alivia Rahma Pramesti", 70},
            {"9952382180", "Ari Lutfianto", 65},
            {"9965653989", "Arief Budiman", 60}
        };
        mhs res[]{
            {"9960312699", "Handi Ramadhan", 90},
            {"9963959682", "Rio Alfandra", 55},
            {"9950310962", "Ronaldo Valentino Uneputty", 80},
            {"9970272750", "Achmad Yaumil Fadjri R.", 60},
            {"9970293945", "Alivia Rahma Pramesti", 70},
            {"9952382180", "Ari Lutfianto", 65},
            {"9965653989", "Arief Budiman", 60}
        };
        
        cout<<"1. Insert sorting:"<<endl;
            cout<<"-Berdasarkan nilai:"<<endl;
            insert_nilai(res);
                for(int i=0;i<7;i++){
                    res[i]=data[i];
                }
            cout<<"-Berdasarkan NISN:"<<endl;
            insert_NISN(res);
                for(int i=0;i<7;i++){
                    res[i]=data[i];
                }
        cout<<"2. Bubble sorting:"<<endl;
            cout<<"-Berdasarkan nilai:"<<endl;
            bubble_nilai(res);
                for(int i=0;i<7;i++){ 
                    res[i]=data[i];
                }
        cout<<"-Berdasarkan NISN:"<<endl;
            bubble_NISN(res);
                for(int i=0;i<7;i++){
                    res[i]=data[i];
                }
        cout<<"3. Select sorting:"<<endl;
            cout<<"-Berdasarkan nilai:"<<endl;
            select_nilai(res);
                for(int i=0;i<7;i++){
                    res[i]=data[i];
                }
            cout<<"-Berdasarkan NISN:"<<endl;
            select_NISN(res);
                for(int i=0;i<7;i++){
                    res[i]=data[i];
                }
    }

    void soal2(){
        mhs res[]{
            {"9960312699", "Handi Ramadhan", 90},
            {"9963959682", "Rio Alfandra", 55},
            {"9950310962", "Ronaldo Valentino Uneputty", 80},
            {"9970272750", "Achmad Yaumil Fadjri R.", 60},
            {"9970293945", "Alivia Rahma Pramesti", 70},
            {"9952382180", "Ari Lutfianto", 65},
            {"9965653989", "Arief Budiman", 60}
        };
        string cari="9950310962";
            for(int i=0;i<7;i++){
                int j=i;
                while(j-1>=0 && res[j].NISN < res[j-1].NISN){
                    swap(res[j],res[j-1]);
                    j--;
                }
            }
            int l=0,r=6;
            int idx=-1;
            while(l<=r){
                int m=(l+r)/2;
                string s=res[m].NISN;
                if(s>cari){
                    r=m-1;	
                }
                else if(s<cari){
                    l=m+1;
                }
                else if(s==cari){
                    idx=m;
                    break;
                }
            }
            //Output
            if(idx!=-1){
                cout<<res[idx].NISN<<" "<<res[idx].nama<<" "<<res[idx].nilai<<endl;
            }
            else{
                cout<<"Tidak ditemukan"<<endl;
            }
    }

    void soal3(){
        mhs res[]{
            {"9960312699", "Handi Ramadhan", 90},
            {"9963959682", "Rio Alfandra", 55},
            {"9950310962", "Ronaldo Valentino Uneputty", 80},
            {"9970272750", "Achmad Yaumil Fadjri R.", 60},
            {"9970293945", "Alivia Rahma Pramesti", 70},
            {"9952382180", "Ari Lutfianto", 65},
            {"9965653989", "Arief Budiman", 60}
        };
            for(int i=0;i<7;i++){
                if(res[i].nilai==60){
                    res[i].nama="Joko";
                }
            }
            // Output
            for(int i=0;i<7;i++){
                cout<<res[i].NISN<<" ";
                cout<<res[i].nama<<" ";
                cout<<res[i].nilai<<endl;;
            }
    }

    int main(){
        cout<<"Output Soal nomor 1 :"<<endl;
        soal1();
        cout<<"Output Soal nomor 2 :"<<endl;
        soal2();
        cout<<"Output Soal nomor 3 :"<<endl;
        soal3();
    }
