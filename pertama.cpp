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

    cout << "alamat mahasiswa : "<< endl;
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;

    cout << "umur mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n nim : " << mhs.nim;
    cout << "\n nama : " << mhs.nama;
    cout << "\n alamat : ";
    cout << "\n \t Desa : " << mhs.alamat.desa;
    cout << "\n \t Kota : " << mhs.alamat.kota;
    cout << "\n umur : " << mhs.umur;

}

