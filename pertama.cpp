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
    Mahasiswa mhs;
    cout << "nomor mahasiswa : ";
    cin >> mhs.nim;
    cout << "nama mahasiswa : ";
    cin >> mhs.nama;

    cout << "alamat mahasiswa : ";
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;

    cout << "umur mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n nim : " << mhs.nim;
    cout << "\n nama : " << mhs.nama;
    cout << "\n alamat : " << mhs.alamat;
    cout << "\n umur : " << mhs.umur;

}

