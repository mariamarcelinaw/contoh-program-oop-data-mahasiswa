#pragma once
#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string nama;
    string NIM;
    string jurusan;
    double IPK;
    string data;

    // ini adalah constructor yang dipanggil pertama kali saat object dibuat
    // Mahasiswa(){
    //     cout << "ini adalah constructor" << endl;
    // }

    // constructor dengan parameter
    Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK);
    void show();




};


