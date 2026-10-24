#include <iostream>
using namespace std;

int main() {
    char npm[15];
    char nama[30];
    float nilai1, nilai2, nilai3, rata_rata;

    // Layar Masukkan
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "NPM            : "; 
    cin >> npm;
    cin.ignore(); // Membersihkan buffer sebelum membaca string dengan spasi
    cout << "Nama           : "; 
    cin.getline(nama, sizeof(nama));
    cout << "Nilai Tugas I  : "; 
    cin >> nilai1;
    cout << "Nilai Tugas II : "; 
    cin >> nilai2;
    cout << "Nilai Tugas III: "; 
    cin >> nilai3;

    // Proses perhitungan rata-rata[cite: 28]
    rata_rata = (nilai1 + nilai2 + nilai3) / 3;

    // Layar Keluaran[cite: 28]
    cout << "\nNPM " << npm << " Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata_rata << " dari hasil tugas yang diikutinya." << endl;

    return 0;
}
