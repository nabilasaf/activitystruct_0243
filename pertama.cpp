// pertama.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat
{ // Membuat stuktur variabel alamat
    string desa;
    string kota;
};

struct Mahasiswa
{ // Membuat stuktur variabel mahasiswa
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs[3];
    for (int i = 0; i < 3; i++) {
        cout << " Nomor Mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << " Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);

        cout << " Alamat Mahasiswa  " << endl;
        cout << " \t Nama Desa : ";
        cin >> mhs[i].alamat.desa;
        cout << " \t Nama Kota : ";
        cin >> mhs[i].alamat.kota;
        cout << "Umur Mahasiswa :";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << endl;
        cout << "Data Mahasiswa ke-" << (i + 1) << ":" << endl;
        cout << "\nNIM : " << mhs[i].nim;
        cout << "\nNama : " << mhs[i].nama;
        cout << "\nAlamat : ";
        cout << "\n\tDesa : " << mhs[i].alamat.desa;
        cout << "\n\tKota : " << mhs[i].alamat.kota;
        cout << "\nUmur : " << mhs[i].umur;
        cout << endl;
    }
};