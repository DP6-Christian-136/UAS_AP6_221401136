// Nama : Christian Nathaniel 
// NIM  : 221401136
// KOM  : C

#include <iostream>
using namespace std;

//Fungsi Penjumlahan Elemen
int total_elemen(int nilai[], int n){
    int total=0;
    for(int i = 0; i < n; i++){
        total = total + nilai[i];
    }
    cout<<"Total Semua Nilai Adalah: "<<total;
}

int main(){
    system("CLS");
    int n,nilai[n];
    cout<<"Masukkan Banyak Nilai: ";
    cin>>n;
    cout<<"Input setiap nilai: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<"Nilai Ke- "<<i+1<<":";
        cin>>nilai[i];
    }
    total_elemen(nilai, n);
}

