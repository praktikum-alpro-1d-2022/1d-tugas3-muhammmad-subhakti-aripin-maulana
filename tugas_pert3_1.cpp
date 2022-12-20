#include <iostream>
#include <math.h>

using namespace std;

int main (){
    // rumus pythagoras meghitung sisi miring segitiga
    //n================================================

    int a = 8, t = 10;
    int c;

    cout << "Nilai A = " << a << endl;
    cout << "Nilai t = " << t << endl;

    c = sqrt ( pow(a,2) + pow(t,2) );

    //n=================================================
    cout << "hasil nilai dari sisi miring adalah = " << c << endl;

    return 0;
}