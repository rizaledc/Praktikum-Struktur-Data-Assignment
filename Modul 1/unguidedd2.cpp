#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definisi struct untuk informasi produk
struct Produk {
    string nama;
    int harga;
};

// Definisi class untuk manajemen penjualan
class ManajemenPenjualan {
private:
    vector<Produk> daftarProduk; // Vektor untuk menyimpan daftar produk yang tersedia

public:
    // Metode untuk menambahkan produk ke dalam daftar
    void tambahProduk(string nama, int harga) {
        Produk produk;
        produk.nama = nama;
        produk.harga = harga;
        daftarProduk.push_back(produk);
    }

   // Metode untuk menampilkan daftar produk
void tampilkanDaftarProduk() {
    cout << "Daftar Produk Tersedia:" << endl;
    for (size_t i = 0; i < daftarProduk.size(); ++i) {
        cout << i + 1 << ". " << daftarProduk[i].nama << " - Rp" << daftarProduk[i].harga << endl;
    }
}

};

int main() {
    // Membuat objek manajemen penjualan
    ManajemenPenjualan manajemenPenjualan;

    // Menambahkan beberapa produk ke dalam daftar
    manajemenPenjualan.tambahProduk("Buku", 50000);
    manajemenPenjualan.tambahProduk("Pensil", 2000);
    manajemenPenjualan.tambahProduk("Penggaris", 5000);

    // Menampilkan daftar produk
    manajemenPenjualan.tampilkanDaftarProduk();

    return 0;
}

//RIZAL WAHYU PRATAMA
//2311110029
//copyright@rizal.edc2024