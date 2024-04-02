// pertama.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    string umur;
    
};

int main()
{
    Mahasiswa mhs[3];
    for (int i = 0; i<3; i++) {
        cout << "Data ke-" << (i + 1) << ":" << endl;
        cout << "nomor mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << "nama mahasiswa : ";
        getline(cin, mhs[i].nama);

        cout << "alamat mahasiswa : " << endl;
        cout << "\t Nama Desa : ";
        cin >> mhs[i].alamat.desa;

        cout << "\t Nama Kota : ";
        cin >> mhs[i].alamat.kota;


        cout << "umur mahasiswa : ";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
        cout << endl;
    }
    
    for (int i = 0; i < 3; i++) {
        cout << endl;
        cout << "Data Mahasiswa ke-" << (i + 1) << ":" << endl;
        cout << "\n nim : " << mhs[i].nim;
        cout << "\n nama : " << mhs[i].nama;
        cout << "\n alamat : ";
        cout << "\n \t Desa : " << mhs[i].alamat.desa;
        cout << "\n \t Kota : " << mhs[i].alamat.kota;
        cout << "\n umur : " << mhs[i].umur;
        cout << endl;
    }
    

};

