#include <iostream>
#include <string>
#include "Mahasiswa.h"

using namespace std;

int main(int argc, char const* argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup", "13305041", "teknik pertanian", 4.0);
    Mahasiswa mahasiswa2 = Mahasiswa("otong", "13305042", "teknik peternakan", 3.0);
    Mahasiswa* mahasiswa3 = new Mahasiswa("pakde", "13305041", "teknik perkakas", 4.0);
    mahasiswa3->show();
    string data = mahasiswa3->data;
    cout << data << endl;
    return 0;
}
