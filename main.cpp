// PROGRAM KelilingLingkaran
// Program membaca panjang jari-jari (r) sebuah lingkaran,
// menghitung keliling lingkaran, lalu mencetak keliling tersebut ke
// layar.

#include <iostream>
using namespace std;

int main()
{
    // DEKLARASI
    const float pi = 3.14;          /* konstanta pi */

    float r;        // jari-jari lingkaran, dalam satuan cm
    float K;        // keliling lingkaran, dalam satuan cm2
    float L;

    // ALGORITMA
    cout << "r (Jari-jari lingkaran) = ? "; cin >> r;
    K = 2 * pi * r;
    L = pi * r * r;
    cout << "Keliling lingkaran = " << K << " cm" << endl;
    cout << "Luas Lingkaran = " << L << " cm^2" << endl;







}
