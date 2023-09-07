#include "Mahasiswa.h"
#include <iostream>
#include <string>
#include "Mahasiswa.h"

using namespace std;

Mahasiswa::Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK)
{
    Mahasiswa::nama = inputNama;
    Mahasiswa::NIM = inputNIM;
    Mahasiswa::jurusan = inputJurusan;
    Mahasiswa::IPK = inputIPK;

    cout << Mahasiswa::nama << endl;
    cout << Mahasiswa::NIM << endl;
    cout << Mahasiswa::jurusan << endl;
    cout << Mahasiswa::IPK << endl;
}
void Mahasiswa::show()
{
    cout << "ini " << Mahasiswa::data << endl;
}