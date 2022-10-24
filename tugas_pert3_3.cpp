#include <iostream>
#include <string>
#include <math.h>

using namespace std;
//perhitungan arus, mencari tegangan, dan mencari hambatan listrik
int main (){
    float v, i, r;

    //rumus menghitung arus listrik
    cout <<"hasil dari menghitung Arus Listrik" << endl;
    cout << "Masukkan Tegangan (V) : ";
    cin >> v;
    cout << "Masukkan Hambatan (R) ; ";
    cin >> r;
    i = v/r;
    cout << "Nilai Arus Listrik = " << i << endl;
    cout << " " << endl;
    cout <<"============================================"<< endl;

    //rumus menghitung tegangan
    cout <<"hasil dari menghitung tegangan" << endl;
    cout << "Masukkan Arus Listrik (I) ; ";
    cin >> i;
    cout << "Masukkan Hambatan (R) : ";
    cin >> r;
    v = i * r;
    cout << "Nilai tegangan = " << v << endl;
    cout << " " << endl;
    cout <<"============================================"<< endl;

    //rumus menghitung hambatan
    cout <<"hasil dari menghitung Hambatan" << endl;
    cout << "Masukkan Tegangan (V) : ";
    cin >> v;
    cout << "Masukkan Arus Listrik (I) : ";
    cin >> i;
    r = v/i;
    cout << "Nilai Hambatan = " << r << endl;

    return 0;
}