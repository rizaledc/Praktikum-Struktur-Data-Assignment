// Dua kode di bawah ini merupakan preprocessor
//digunakan untuk menggunakan input output dan memanipulasi string.
#include <stdio.h> 
#include <string.h>

//Struct
struct Mahasiswa
{
            char name[50]; //maksimal 50 char
            char address[100]; //maksimal 100 char
            int age;
};
int main() //kode inti yang akan dieksekusi
{
    //Menggunakan struct dalam pengkodean
    struct Mahasiswa mhs1, mhs2;
    //Mengisi value ke struct sesuai yang diinginkan
    strcpy(mhs1.name, "Rizal");
    strcpy(mhs1.address, "Bali");
    mhs1.age = 18;
    strcpy(mhs2.name, "Mikhael");
    strcpy(mhs2.address, "Banyumas");
    mhs2.age = 19;

    //Mencetak value struct sebelumnya.
    printf("====MAHASISWA 1====\n");
    printf("Nama : %s\n", mhs1.name);
    printf("Asal daerah : %s\n", mhs1.address);
    printf("Umur : %d\n", mhs1.age);
    printf("\n");
        printf("====MAHASISWA 2====\n");
    printf("Nama : %s\n", mhs2.name);
    printf("Asal daerah : %s\n", mhs2.address);
    printf("Umur : %d\n", mhs2.age);
    return 0;
}


// RIZAL WAHYU PRATAMA
// 2311110029
//copyright@rizal.edc2024