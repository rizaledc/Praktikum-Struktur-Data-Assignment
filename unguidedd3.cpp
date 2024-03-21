#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

// Struktur data untuk menyimpan nilai mahasiswa
struct NilaiMahasiswa {
    float nilai;
    string grade;
};

// Class untuk manajemen nilai mahasiswa
class NilaiManager {
private:
    map<string, map<string, NilaiMahasiswa>> dataNilai; // Map untuk menyimpan nilai mahasiswa

public:
    // Menambahkan nilai mahasiswa
    void tambahNilai(string nama, string matkul, float nilai) {
        if (nilai < 0 || nilai > 100) {
            cout << "Error: Nilai harus berada di antara 0 dan 100." << endl;
            return;
        }

        NilaiMahasiswa nilaiMahasiswa;
        nilaiMahasiswa.nilai = nilai;
        nilaiMahasiswa.grade = 
        (nilai >= 80) ? "A" : 
        (nilai >= 70) ? "B" : 
        (nilai >= 60) ? "C" : 
        (nilai >= 50) ? "D" : 
        "E";

        dataNilai[nama][matkul] = nilaiMahasiswa;
        cout << "Nilai mahasiswa " << nama << " pada mata kuliah " << matkul << " berhasil ditambahkan." << endl;
    }

    // Menampilkan nilai mahasiswa
    void tampilkanNilai(string nama) {
        if (dataNilai.find(nama) != dataNilai.end()) {
            cout << "Nilai mahasiswa " << nama << ":" << endl;
            for (const auto& pair : dataNilai[nama]) {
                cout << setw(20) << left << pair.first << " : " << setw(5) << right << pair.second.nilai << " (" << pair.second.grade << ")" << endl;
            }
        } else {
            cout << "Mahasiswa dengan nama " << nama << " tidak ditemukan." << endl;
        }
    }
};

int main() {
    NilaiManager nilaiManager;

    nilaiManager.tambahNilai("John", "Matematika", 85);
    nilaiManager.tambahNilai("John", "Fisika", 75);
    nilaiManager.tambahNilai("Alice", "Matematika", 70);
    nilaiManager.tambahNilai("Alice", "Fisika", 65);
    nilaiManager.tambahNilai("Bob", "Matematika", 60);
    nilaiManager.tambahNilai("Bob", "Fisika", 55);

    nilaiManager.tampilkanNilai("John");
    nilaiManager.tampilkanNilai("Alice");
    nilaiManager.tampilkanNilai("Bob");
    nilaiManager.tampilkanNilai("Charlie"); // Mahasiswa tidak ditemukan

    return 0;
}

// RIZAL WAHYU PRATAMA
// 2311110029
//copyright@rizal.edc2024
//S1SD-04-B
