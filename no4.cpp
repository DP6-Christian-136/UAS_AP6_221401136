// Nama : Christian Nathaniel 
// NIM  : 221401136
// KOM  : C

#include <iostream>
using namespace std;//Tdk perlu menambahkan std tiap mau cout

int tambah(int a, int b) {
    return a + b;
}//Memindahkan Fungsi ke atas

int main() {
    cout << "Hello, world!" <<  endl;

    if (true) {
        cout << "Ini blok if" << endl;
    }else{
        cout << "Ini blok else" << endl;
    }
    //Mengubah endl dan melengkapi kurung kurawal
   
    int x = 5;
    cout << "Nilai x: " << x << endl;//Ubah var y ke var x

    
    int hasil = tambah(3, 4);//Hapus 5, Memakai 2 variabel saja
    cout << "Hasil penjumlahan: " << hasil << endl;

    
    switch (x) {
        case 5: //Perbaiki Bentuk Umum
            cout << "Nilai x adalah 5" << endl;
            break;
        default:
            cout << "Nilai x bukan 5" << endl;
    }

    return 0;

    int* ptr;
    *ptr = 10;  

    int* nullPtr = nullptr;
    nullPtr = &x;  

    delete nullPtr;  

    int* dynamicPtr = new int;
    *dynamicPtr = 7;
    delete dynamicPtr;
    *dynamicPtr = 20;  

    int arr[5];
    int* arrPtr = arr;
    arrPtr[5] = 10;  

    //Mengubah beberapa huruf besar ke kecil atau sebaliknya, menghapus beberapa yang tdk berpengaruh pada program
    return 0;
}

//hehheheheh semangat
//hehehehehe ngokeyy bang