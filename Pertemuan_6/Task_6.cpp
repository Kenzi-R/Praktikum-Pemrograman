#include <bits/stdc++.h>
using namespace std;

    struct swalayan{
        string kode;
        string nama;
        int harga;
        int jumlah;
    };

    int main(){
        int n;  
        swalayan data[55];
        cout<<"Masukkan banyak barang = ";
        cin>>n;
        int total=0;
        double rata=0;
        for(int i=1;i<=n;i++){
            cout<<"Masukkan Kode Barang "<<i<<" = ";
            cin>>data[i].kode;
            cout<<"Masukkan Nama Barang "<<i<<" = ";
            cin>>data[i].nama;
            cout<<"Masukkan Harga Barang "<<i<<" = ";
            cin>>data[i].harga;
            rata+=data[i].harga;
            cout<<"Masukkan Jumlah Barang "<<i<<" = ";
            cin>>data[i].jumlah;
            total+=data[i].jumlah;
        }
        rata=rata/n;
        //Output
        cout<<"Dengan perincian sebagai berikut:"<<endl;
        for(int i=1;i<=n;i++){
            cout<<"Barang ke-"<<i<<endl;
            cout<<"Kode barang: "<<data[i].kode<<endl;
            cout<<"Nama barang: "<<data[i].nama<<endl;
            cout<<"Harga barang: "<<data[i].harga<<endl;
            cout<<"Jumlah barang: "<<data[i].jumlah<<endl;
        }
        cout<<"Jumlah total = "<<total<<endl;
        cout<<"Harga rata rata dari semua barang = "<<rata<<endl;
        return 0;
    }