#include <iostream>
using namespace std;

//Program Kartu Peserta UTBK
//Nama  : Christian Nathaniel
//NIM   : 221401136
//Kom   : C
struct pilihan{
        string pil1;
        string pil2;
    };
    struct data_diri{
        string no_peserta;
        char nama[30];
        string nisn;
        pilihan prodi;
    };
int main(){
    system("CLS");
    data_diri peserta;

    cout<<"Formulir Pengisian Data UTBK"<<endl;
    cout<<"Masukkan Nama Peserta        : ";
    cin>>peserta.nama;
    cout<<"Masukkan Nomor Peserta       : ";
    cin>>peserta.no_peserta;
    cout<<"Masukkan NISN Peserta        : ";
    cin>>peserta.nisn;

    cout<<"Masukkan Pilihan 1           : ";
    cin>>peserta.prodi.pil1;
    cout<<"Masukkan Pilihan 2           : ";
    cin>>peserta.prodi.pil2;

    system("CLS");
    cout<<"Kartu Peserta UTBK"<<endl;
    cout<<"Data Diri"<<endl;
    cout<<"Nomor Peserta                : "<<peserta.no_peserta<<endl;
    cout<<"Nama Peserta                 : "<<peserta.nama<<endl;
    cout<<"NISN Peserta                 : "<<peserta.nisn<<endl;

    cout<<"\nPilihan Prodi"<<endl;
    cout<<"Pilihan 1                    : "<<peserta.prodi.pil1<<endl;
    cout<<"Pilihan 2                    : "<<peserta.prodi.pil2<<endl;

    system("pause");

}