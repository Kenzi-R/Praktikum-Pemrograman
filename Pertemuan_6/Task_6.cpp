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
        swalayan data[51];
        cout<<"Masukkan banyak barang = ";
        cin>>n;
        long long total=0;
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
        // rata=rerata();
        //Output
        cout<<"Jumlah semua barang adalah "<<total<<endl;
        cout<<"Dengan perincian sebagai berikut:"<<endl;
        for(int i=1;i<=n;i++){
            cout<<"Barang ke-"<<i<<endl;
            cout<<"Kode barang: "<<data[i].kode<<endl;
            cout<<"Nama barang: "<<data[i].nama<<endl;
            cout<<"Harga barang: "<<data[i].harga<<endl;
            cout<<"Jumlah barang: "<<data[i].jumlah<<endl;
        }
        cout<<"Harga rata rata dari semua barang = "<<rata<<endl;
        return 0;
    }

//11001 = 50
//6.5. Pertanyaan
// 1. Jelaskan perbedaan tipe data struct dan array!
/*
    Perbedaanya ialah tipe data struct merupakan tipe data yang berfungsi untuk 
    menggabungkan beberapa tipe data yang lain dan kemudian akan menjadi sebuah
    tipe data yang baru. Contoh: struct swalayan menampung string kode, string nama, 
    int harga, int jumlah
    Sedangkan array, merupakan tipe data yang berfungsi untuk menyimpana atau menampung 
    nilai dari tipe dat
*/

// 2. Dapatkan tipe data struktur dibuat dalam bentuk matrix 2 dimensi atau lebih? 
// Jelaskan alasan anda!
/*
    Bisa saja, dengan membuat menjadi 2 dimensi kita dapat menyimpan lebih banyak lagi
    misalnya dalam koordinat kartesisu kita juga dapat menyimpan nilai dari beberapa 
    titik
*/