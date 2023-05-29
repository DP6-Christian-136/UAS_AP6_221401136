// Nama : Christian Nathaniel 
// NIM  : 221401136
// KOM  : C

#include <iostream>
using namespace std;

struct Data {
    string nim;
    string nama;
    string kom;
};

Data maxdata[5];
int banyak_data = 0;
string loop;


void createData() {
    system("CLS");
    do {
        if (banyak_data < 5) {
            Data databaru;
            cout << "Data " << banyak_data + 1 << ":" << endl;
            cout << "Masukkan NIM Anda: ";
            cin >> databaru.nim;
            cout << "Masukkan Nama Anda: ";
            cin.ignore();
            getline(cin, databaru.nama);
            cout << "Masukkan Kom Anda: ";
            cin >> databaru.kom;

            maxdata[banyak_data] = databaru;

            banyak_data++;

            cout << "Ulangi? (y/t): ";
            cin >> loop;
        }
        else {
            cout << "Data Penuh!!!" << endl;
            cout << "Kembali? (t): ";
            cin >> loop;
        }
    } while (loop == "y");
}

void readData() {
    system("CLS");

    if (banyak_data > 0) {
        cout << "Data yang telah Tersimpan" << endl;
        for (int i = 0; i < banyak_data; i++) {
            cout << "Data " << i + 1 << ":" << endl;
            cout << "NIM Anda adalah: " << maxdata[i].nim << endl;
            cout << "Nama Anda adalah: " << maxdata[i].nama << endl;
            cout << "KOM Anda adalah: " << maxdata[i].kom << endl;
        }
    }
    else {
        cout << "Belum ada data yang Tersimpan" << endl;
    }
}

void updateData(){
    int a;
    do{
        readData();
        cout<<"Ingin ubah data berapa? ";
        cin>>a;
        cout<<"Data "<<a<<endl;
        cout << "Masukkan NIM baru Anda: ";
        cin >> maxdata[a-1].nim;
        cout << "Masukkan Nama baru Anda: ";
        cin.ignore();
        getline(cin, maxdata[a-1].nama);
        cout << "Masukkan Kom baru Anda: ";
        cin >> maxdata[a-1].kom;

        cout<<"kembali mengubah? (y/t): ";
        cin>>loop;
    }while(loop == "y");
}

void deleteData(){
    int b;
    do{
        if(banyak_data > 0){
            cout<<"Ingin hapus data ke? ";
            cin>>b;
            for(int j = b; j < banyak_data; j--){
                maxdata[j-1].nim = maxdata[j].nim;
                maxdata[j-1].nama = maxdata[j].nama;
                maxdata[j-1].kom = maxdata[j].kom;
            }
            banyak_data--;
            cout<<"Hapus lagi? (y/t): ";
            cin>>loop;
        } else{
            cout<<"Belum ada data, isi (t)";
            cin>>loop;
        }
    }while(loop == "y");
}


int main() {
    int n;
    do {
        system("CLS");
        cout << "1. Create Data" << endl;
        cout << "2. Read Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Delete Data" << endl;
        cout << "5. QUIT" << endl;
        cout << "Masukkan pilihan: ";
        cin >> n;

        switch (n) {
            case 1:
                createData();
                break;
            case 2:
                do{
                    readData();
                    cout<<"Kembali? (y): ";
                    cin>>loop;
                }while(loop != "y");
                break;
            case 3:
                updateData();
                break;
            case 4:
                deleteData();
                break;
            default:
                cout << " " << endl;
        }
    } while (n != 5);
    cout << "Program Selesai" << endl;
    return 0;
}