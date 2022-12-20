#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    //n mengitung nilai akhir mahasiswa
    //n==================================
    int praktikum = 75, uts = 70, uas = 88;
    int Nilaiakhirmahasiswa; 

    //n=========================================================

    cout << "Nilai praktikum mahasiswa = " << praktikum << endl;
    cout << "Nilai uts mahasiswa = " << uts << endl;
    cout << "Nilai uas mahasiswa = " << uas << endl;

    Nilaiakhirmahasiswa = (praktikum * 20/100) + (uts * 30/100) + (uas * 50/100);

    cout << "Nilai akhir dari mahasiswa = " << Nilaiakhirmahasiswa << endl;

    return 0;
}