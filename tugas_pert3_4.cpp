#include <iostream>
using namespace std;
int main(){
    int b = 25, x = 15, c = 20;
    int y;
    
    //n==================================
    cout << "Menghitung Persamaan" <<endl;
    cout << "Nilai B: " << b <<endl;
    cout << "Nilai X: " << x <<endl;
    cout << "Nilai C: " << c <<endl;
    cout << "menghitung hasil Y= bx^2 + 0.5x - c"<< endl;
    cout << "Y = "<<b<<"("<<x<<")^2 + 0.5("<<x<<") - "<<c<<endl;
    y = (b*x*x)+0.5*x-c;
    cout << "hasil Y: " << y <<endl;

    return 0;
}