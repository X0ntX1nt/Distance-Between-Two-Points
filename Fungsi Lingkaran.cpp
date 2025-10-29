#include <iostream>
#include <cmath>    // untuk fungsi sqrt() dan pow()
using namespace std;

// Konstanta untuk nilai pi
const double PI = 3.1416;

// Fungsi untuk menghitung jarak antara dua titik
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Fungsi untuk menghitung jari-jari lingkaran
double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

// Fungsi untuk menghitung keliling lingkaran
double circumference(double r) {
    return 2 * PI * r;
}

// Fungsi untuk menghitung luas lingkaran
double area(double r) {
    return PI * pow(r, 2);
}

// Fungsi utama
int main() {
    double x1, y1, x2, y2;

    // Input nilai x1, y1, x2, y2
    cout << "Masukkan koordinat pusat lingkaran (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat titik pada lingkaran (x2 y2): ";
    cin >> x2 >> y2;

    // Menghitung radius, diameter, keliling, dan luas
    double r = radius(x1, y1, x2, y2);
    double d = 2 * r;
    double c = circumference(r);
    double a = area(r);

    // Menampilkan hasil
    cout << fixed;
    cout.precision(4); // membatasi hasil 4 angka di belakang koma
    cout << "\n=== HASIL PERHITUNGAN LINGKARAN ===\n";
    cout << "Radius (jari-jari): " << r << endl;
    cout << "Diameter: " << d << endl;
    cout << "Keliling: " << c << endl;
    cout << "Luas: " << a << endl;

    return 0;
}