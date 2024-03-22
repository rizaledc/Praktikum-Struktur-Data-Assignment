# <h1 align="center">Laporan Praktikum Modul 1 Tipe Data</h1>
<p align="center">Rizal Wahyu Pratama</p>

# <h2 align="center">BAB 1 PENDAHULUAN</h2>

## 1.1 Latar Belakang

Memahami cara komputer dalam mengoperasikan sesuatu bukanlah hal yang mudah, hal ini perlu pengetahuan khusus yang mendalam. Komputer dapat dengan mudah dan efisien melakukan pekerjaan yang terasa sulit dikerjakan manusia dalam kehidupan sehari-hari. Komputer memiliki bahasanya sendiri untuk mengoperasikan suatu pekerjaan, dan bahasa ini disebut dengan bahasa pemrograman.

Bahasa pemrograman, atau sering diistilahkan dengan bahasa komputer, merupakan teknik komando atau intruksi standar untuk memerintah komputer(Dewi, 2016). Dalam dunia pemrograman terdapat banyak bahasa pemrograman yang dapat digunakan untuk mengoperasikan suatu komputer dan membentuk suatu sistem komputer, salah satu bahasa tersebut adalah C++.  Bahasa C++ dapat digunakan juga untuk membuat aplikasi yang didistribusikan ke beberapa mesin(Somantri, 2005). Dengan memprogram suatu aplikasi yang didistribusikan ke beberapa mesin, seseorang dapat mengarahkan mesin sesuai yang diinginkannya.

Pada tahun 1980 seorang ahli yang bernama Bjarne Stroustrup mengembangkan beberapa hal dari bahasa C yang dinamakan “C with Classes” yang pada mulanya disebut “a better C” dan berganti nama pada tahun 1983 menjadi C++ oleh Rick Mascitti, dibuat di Laboratorium Bell, AT&T (ALGORITMA & PEMROGRAMAN (C++), 2016). Pengembangan bahasa C terus berlanjut, hingga pada C++ ini ditambahkan konsep yang baru seperti class yang sifatnya Object Oriented Programming (OOP) dengan tujuan mempermudah programer dalam mengelola program yang kompleks.

Dalam memprogram sebuah komputer diperlukannya pengkodean dengan berbagai macam tipe data yang ada di dalamnya, sama halnya dengan bahasa C++ untuk membentuk kode program diperlukan pemahaman yang mendalam tentang tipe data. Bahasa C++ memiliki berbagai tipe data yang dapat dieksplor secara mendalam oleh penggunanya, seperti integer, float, boolean, char, string, dan lain sebagainya.

## 1.2 Rumusan Masalah

Berdasarkan latar belakang di atas, penulis telah merumuskan beberapa masalah yang akan di bahas dalam laporan praktikum ini, sebagai berikut:

1.	Apa yang dimaksud dengan tipe data primitif, abstrak, dan kolektif?
2.	Bagaimana pengaplikasian pada tools yang digunakan?
3.	Bagaimana pengaplikasian berbagai tipe data pada bahasa pemrograman C++?

## 1.3 Tujuan

Berikut ini merupakan rumusan tujuan yang dapat dicapai dengan dituliskannya laporan praktikum ini, sebagai berikut:
1.	Mahasiswa dapat mempelajari tipe data primitif, abstrak, dan kolektif. 
2.	Mahasiswa dapat memahami pengaplikasian pada tools yang digunakan.
3.	Mahasiswa mengaplikasikan berbagai tipe data pada bahasa pemograman yang telah ditentukan.

# <h2 align="center">BAB 2 PEMBAHASAN</h2>

## 2.1 Dasar Teori

Bahasa pemrograman, merupakan suatu komando atau perintah yang dibuat manusia untuk membuat komputer menjadi memiliki fungsi tertentu (Gustiawan et al., 2020). Bahasa pemrograman bermacam-macam, salah satunya adalah bahasa C++, dimana bahasa ini sangat populer digunakan pada kalangan programer. Seperti bahasa pemrograman lainnya, bahasa C++ juga dapat digunakan untuk mengolah data dengan cukup baik. 

Data adalah fakta-fakta yang berupa angka-angka, teks, dokumen, gambar, bagan, suara, yang mewakili deskripsi verbal atau kode tertentu, dan semacamnya(Nauviana Pita,2020). Dari berbagai macam jenis data ini, kita dapat mengetahui dan mengelompokkan data menjadi beberapa tipe. Terdapat beberapa tipe data yang umum ditemui dan dikelompokkan dalam beberapa kategori seperti tipe data primitif, tipe data abstrak, dan tipe data koleksi.

Tipe data ini perlu diketahui agar compiler dapat mengetahui bagaimana sebuah data akan digunakan dan diperlakukan (Nauviana Pita). Dengan memahami tipe-tipe data yang digunakan, seorang compiler dapat mempercepat pekerjaannya dalam melakukan pemrograman karena masing-masing tipe data memiliki ciri khasnya masing-masing dan dengan ukuran yang berbeda-beda. Berikut ini merupakan penjabara dari tipe data primitif, tipe data abstrak, dan tipe data koleksi.

### 2.1.1 Tipe Data Primitif

Tipe data ini merupakan tipe data yang paling sering digunakan oleh programer karena tipe data primitif ini merupakan tipe data bawaan dari C++ yang dapat dengan langsung untuk digunakan. Tipe data primitif ini memungkinkan programer untuk mengelola berbagai jenis data dengan waktu efisien. Berikut ini merupakan tipe data primitif yang umum digunakan pada bahasa pemrograman C++:
1.	Integer (int)	: Tipe data yang digunakan untuk menyimpan berbagai bilangan bulat seperti 1,2,3,4,5,....,n
2.	Float/Double	: Tipe data yang digunakan untuk menyimpan berbagai bilangan pecahan seperti 3.147, 7.98, 0,00018,…,n
3.	Char		: Tipe data yang digunakan untuk menyimpan berbagai karakter tunggal seperti `R`,`I`,`Z`,`A`,`L`, dan lainnya.
4.	Boolean	: Tipe data yang hanya memiliki dua nilai di dalamnya yaitu benar (True) dan salah (False). 
5.	Void		: Tipe data yang biasanya digunakan untuk menyatakan tidak adanya data.
   
Dengan tipe data primitif, seorang programmer dapat mengolah berbagai jenis data dengan tipe yang disediakan bahasa C++.

### 2.1.2 Tipe Data Abstrak

Tipe data abstrak atau yang biasa disebut Abstrak Data Type(ADT) banyak digunakan oleh programmer dalam membuat sebuah program. Seperti namanya, tipe data abstrak memiliki struktur yang abstrak, dimana merupakan gabungan dari beberapa tipe data. Dalam pemrograman komputer, tipe data abstrak memungkinkan programer untuk dapat mendefinisikan berbagai tipe data tanpa harus memberikan detail implementasi dari tipe data yang digunakan. 

Pada tipe data abstrak terdapat kelas tipe. Dimana kelas abstrak ini dapat bertindak sebagai ekspresi konsep umum yang merupakan tempat yang lebih spesifik dalam tipe data. Fitur kelas yang terdapat pada C++ adalah Object Oriented Program(OOP) yang dapat membungkus tipe data yang ada di dalamnya sebagai anggota.

### 2.1.3 Tipe Data Koleksi

Collection Data Type(CDT) merupakan tipe data yang digunakan untuk menyimpan beberapa value atyau objek secara bersamaan. Tipe data koleksi memungkinkan programmer untuk mengolah berbagai data besar dengan cara yang efisien dan terstruktur. Terdapat beberapa tipe data koleksi yang sering digunakan sebagai berikut:

1.	Array	: Tipe data yang digunakan untuk mengumpulkan elemen data dengan tipe yang sama saja. Seperti array yang hanya berisi kumpulan bilangan bulat.
2.	String	: Tipe data yang digunakan untuk membuat kumpulan karakter yang dapat juga membentuk kalimat. Seperti `Rizal`, `Rizal orangnya baik`, dan lain sebagainya.
3.	Vector	: Vector memiliki kemiripan dengan array, namun ukurannya yang dapat diubah secara dinamis. Vector ini dapat menyediakan operasi penambahan dan pengurangan elemen dengan lebih mudah.
4.	Struct	: Tipe data ini yang dapat berisi dari beberapa tipe data dasar.  Struct ini dapat memiliki lebih dari satu jenis data.
   
Empat tipe data di atas merupakan beberapa contoh dari tipe data koleksi yang sering digunakan di kalangan programer. Tipe data ini merupakan turunan dari bahasa C namun tetap memiliki perbedaan di dalamnya.

## 2.2 Guided

Pada praktikum ini penulis telah mendapatkan beberapa latihan mengenai berbagai tipe data. Latihan tersebut akan dijelaskan perbagiannya, sebagai berikut:

### 2.2.1 Guided Tipe Data Primitif (Program Kalkulator Sederhana)**
Kode Lengkap

```C++
#include <iostream> // mengizinkan program menggunakan Input dan Output
using namespace std; // memungkinkan penggunaan fungsi dan objek dalam namespace std, cin, dan cout.

// membuat code inti atau main code
int main()
{
    char op; //op digunakan untuk menyimpan operator mtk yang diinputkan
    cout<<"Selamat datang di kalkulator digital by Rizal"<<endl<<endl;
    cout<<"Gunakanlah dengan baik"<<endl;
    float num1, num2; //menginisiasi num1 dan num2 yang akan digunakan

    cout << "Masukkan operator: "; // meminta inputan operator
    cin >> op;

    cout << "Masukkan nomor pertama: "; 
    cin >> num1;

    cout << "Masukkan nomor kedua: "; 
    cin >> num2;

    switch(op) //statement yang mengevaluasi nilai dari variabel pada op
    {
        //kasus yang akan dieksekusi sesuai dengan inputan pengguna.
        //case 1
    case '+': // jika inputan berupa +
        cout << "Hasil: " << num1 + num2;
        break;
        // case 2
    case '-': // jika inputan berupa -
        cout << "Hasil: " << num1 - num2;
        break;
        // case 3
    case '*': // jika inputan berupa *
        cout << "Hasil: " << num1 * num2;
        break;
        // case 4
    case '/': // jika inputan berupa /
        if (num2 != 0) //jika kondisi num2 tidak sama dengan 0
            cout << num1 / num2;
        else //ketika inputan num2 adalah 0 maka error.
            cout << "Error! Dibagi dengan 0!";
        break;
        //case 5
    default: //jika operator yang diinputkan tidak ada maka masuk kesini
        cout << "Operator tidak ditemukan. Silakan coba lagi!";
    }

    return 0; //inisiasi bahwa program telah selesai berjalan normal
}

// RIZAL WAHYU PRATAMA
// 2311110029
//copyright@rizal.edc2024
```

Bagian 1

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/guided1a.png?raw=true)

Pada bahasa pemrograman C++ jika kita ingin menggunakan input dan output pada program maka harus memanggil library <iostream> terlebih dahulu. Begitu pula dengan name space seperti std, cout, dan cin perlu kita panggil juga sebelum membuat programnya. Dimana pemanggilannya seperti kode pemrograman di atas.

Bagian 2

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/guided1b.png?raw=true)

Pada kode di atas, penulis menggunakan int main() yang mengartikan bahwa kode tersebut merupakan kode inti yang akan dieksekusi lebih awal dibandingkan dengan kode lainnya. Di dalam int main() tersebut terdapat char op, dimana op ini digunakan untuk menampung inputan operator dari pengguna nantinya. Berikutnya ada cout yang digunakan untuk mengeluarkan output yang diinginkan seperti pada di atas tedapat string. Terakhir pada bagian 2 ini terdapat float num1 dan num2 yang akan menginisiasi variabel yang akan digunakan pada program di bawahnya.

Bagian 3

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/guided1c.png?raw=true)

Pada bagian 3 ini kita menggunakan cout kembali karena ingin mengeluarkan string dan meminta inputan dari pengguna menggunakan cin >> op dimana op nya akan menampung inputan pengguna. Berikutnya ada cout kembali dimana cout pertama dan kedua sama sama meminta inputan angka pertama dan angka kedua yang akan dimasukkan.

Bagian 4

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/guided1d.png?raw=true)

Pada kode di atas, terdapat switch(op) yang bertujuan untuk membaca inputan dari pengguna lalu disesuaikan dengan case yang berlaku. Jika pengguna menginputkan + maka akan masuk ke case 1, jika pengguna menginputkan – maka akan masuk ke case 2, jika pengguna menginputkan * maka akan masuk ke case 3, dan jika pengguna menginputkan / maka akan masuk ke case 4.	Namun jika dari ke-4 operator (`+`,`-`,`*`,`/`) tidak ada yang diinputkan atau inputan berbeda berlaku case 5.

Bagian 5

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/guided1e.png?raw=true)

Return 0 pada kode digunakan untuk menginisiasi bahwa program telah berjalan dengan normal.

#### Output Program

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/OutputGuided1.png" alt="Alt Text">
</p>

Dari outputnya kita mengetahui bahwa program akan meminta user untuk menginputkan operator yang ingin digunakannya (`+`, `-`, `*`, `/`). Setelah itu user akan diminta menginputkan dua angka, sehingga operasi aritmatika dapat berjalan dengan baik.

#### Kesimpulan
Kode program ini merupakan kode yang menyediakan kalkulator sederhana seperti penjumlahan, pengurangan, perkalian, dan pembangian menggunakan bahasa pemrograman C++. Program kalkulator sederhana ini masih menggunakan sistem sederhana dengan menggunakan tipe data Primitif.

### 2.2.2 Guided Tipe Data Abstrak (Data Mahasiswa)

```C++
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
```

Bagian 1

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/guided2a.png?raw=true)

Kode di atas menggunakan std input output dan string. Dimana tujuan utamanya adalah mencantumkan output dan input pada program dan dapat memanipulasi string pada program.

Bagian 2

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/guided2b.png?raw=true)

struct Mahasiswa terdiri dari tiga anggota yaitu name yang maksimal karakternya 50, address maksimal karakternya 100, dan age merupakan integer yang mewakili umur dari mahasiswa.

Bagian 3

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/guided2c.png?raw=true)

int main() merupakan sebuah fungsi utama yang akan dieksekusi. Dari fungsi utama ini terdapat variabel mhs1, mhs2 dari tipe struct "Mahasiswa". Berikutnya kita dapat mengisi value dari name, address, dan age dari mhs1 dan mhs2. Dari kodingan di atas terdapat Mahasiswa 1 dengan nama Rizal address Bali umurnya 18, berikutnya Mahasiswa 2 dengan nama Mikhael address Banyumas umur 19.

Bagian 4

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/guided2d.png?raw=true)

Dari kode di atas menyatakan bahwa kita akan mencetak value-value yang telah kita masukkan pada variabel name, address, dan age dari mhs1 dan mhs2 menggunakan fungsi printf. Return 0 pada kodingan menyatakan bahwa kode telah selesai di eksekusi dan tidak perlu diulangi lagi.

#### Output
<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/OutputGuided2.png" alt="Alt Text">
</p>

Dari output kode di atas, kita mengetahui bahwa variabel name dengan value Rizal, Asal daerah dari variabel address dengan value Bali, dan Umur dari variabel age yang berisi angka 18. Semua variabel tersebut dipanggil sehingga muncul sebagai output. Hal yang sama berlaku pada nama mahasiswa Mikhael.

#### Kesimpulan

Kode di atas merupakan kode yang dapat menampilkan value yang telah diinputkan dari suatu variabel. Dimana pada kode di atas dibuatlah variabel name, address, dan age yang akan menyimpan value yang diinputkan. Dari semua variabel ini merupakan variabel bertipe abstrak yang terdiri dari berbagai jenis tipe data.

### 2.2.3 Guided Tipe Data Koleksi (Nilai Array)

```C++
#include <iostream>
#include <array>
using namespace std;

int main() {
    //Deklarasi dan inisiasi array
    int nilai[5];
    nilai[0] = 20;
    nilai[1] = 25;
    nilai[2] = 30;
    nilai[3] = 35;
    nilai[4] = 40;

//Mencetak array dengan tab
cout<<endl<<endl;
cout << "The value from the first array is : "<< nilai[0]<<endl<<endl;
cout << "The value from the second array is : "<< nilai[1]<<endl<<endl;
cout << "The value from the third array is : "<< nilai[2]<<endl<<endl;
cout << "The value from the fourth is : "<< nilai[3]<<endl<<endl;
cout << "The value from the fifth array is : "<< nilai[4]<<endl<<endl;
return 0;
}

// RIZAL WAHYU PRATAMA
// 2311110029
//copyright@rizal.edc2024
```

Bagian 1

<p align = "center">
   <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/guided3a.png" alt="Alt Text">
</p>

Preprocessor <iostream> dapat digunakan untuk input maupun output dan <array> untuk menggunakan class array yang ada pada C++. Begitu pula dengan name space seperti std, cout, dan cin perlu kita panggil juga sebelum membuat programnya. Dimana pemanggilannya seperti kode pemrograman di atas.

Bagian 2

<p align = "center">
   <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/guided3b.png" alt="Alt Text">
</p>

Fungsi 'main' merupakan fungsi yang akan diutamakan untuk dieksekusi. Di dalam fungsi main terdapat int nilai dengan 5 elemen bertipe integer, nilai dari setiap elemennya dideklarasikan secara terpisah mulai dari indeks ke-0 hingga indeks ke-4.

Bagian 3

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/guided3c.png?raw=true)

Pada bagian 3 ini kita akan mencetak nilai dari seluruh elemen array yang telah kita buat menggunakan `cout` dari class `ostream` mulai dari array indeks ke-0 hingga array indeks ke-4. Berikutnya ada endl yang digunakan untuk membuat baris baru.

#### Output
<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/OutputGuided3.png" alt="Alt Text">
</p>

Dari output yang dihasilkan kita mengetahui value dari array pertama hingga array ke-lima. Dengan mendeklarasikan suatu variabel sebelumnya lalu memaggilnya pada cout, program dapat berjalan dengan menggunakan tipe data koleksi.

#### Kesimpulan

Pada program di atas, dibuatlah kode menggunakan tipe data koleksi. Dengan membuat array yang terdiri dari 5 elemen. Lalu elemen-elemen tersebut akan dipanggil menggunakan cout yang merupakan library dari iostream.

## 2.3 Unguided

Pada praktikum Algoritma dan Struktur Data, penulis diberikan studi kasus sebagai bentuk penerapan dari latihan yang diberikan. Berikut ini merupakan studi kasus yang diberikan:

### 2.3.1 Soal 1. Unguided Tipe Data Primitif (Menghitung Luas Bangun Datar)

Soal : Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. 
Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari 
materi tipe data primitif! 

Jawab :

***KODE PROGRAM***

```C++
#include <iostream>
using namespace std;

// Konstanta untuk nilai phi (π)
const float PI = 3.14;

// Fungsi untuk menghitung luas persegi panjang
float hitungLuasPersegiPanjang(float panjang, float lebar) {
    return panjang * lebar;
}

// Fungsi untuk menghitung luas segitiga
float hitungLuasSegitiga(float alas, float tinggi) {
    return 0.5 * alas * tinggi;
}

// Fungsi untuk menghitung luas lingkaran
float hitungLuasLingkaran(float jariJari) {
    return PI * jariJari * jariJari;
}

// Fungsi untuk menampilkan pesan salam
void pesanSalam(char nama[]) {
    cout << "Halo, selamat datang " << nama << "!" << endl;
}

int main() {
    float panjang, lebar, alas, tinggi, jariJari;
    char nama[50];
    int choice;

    cout << "Masukkan nama Anda: ";
    cin.getline(nama, 50);

        // Memanggil fungsi pesanSalam
    pesanSalam(nama);

    cout << "Pilih bangun datar yang ingin dihitung luasnya:" << endl;
    cout << "1. Persegi Panjang" << endl;
    cout << "2. Segitiga" << endl;
    cout << "3. Lingkaran" << endl;
    cout << "Masukkan pilihan Anda (1/2/3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            cout << "Luas persegi panjang dengan panjang " << panjang << " dan lebar " << lebar << " adalah: " << hitungLuasPersegiPanjang(panjang, lebar) << endl;
            break;
        case 2:
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            cout << "Luas segitiga dengan alas " << alas << " dan tinggi " << tinggi << " adalah: " << hitungLuasSegitiga(alas, tinggi) << endl;
            break;
        case 3:
            cout << "Masukkan jari-jari lingkaran: ";
            cin >> jariJari;
            cout << "Luas lingkaran dengan jari-jari " << jariJari << " adalah: " << hitungLuasLingkaran(jariJari) << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}

// RIZAL WAHYU PRATAMA
// 2311110029
//copyright@rizal.edc2024
// S1SD-04-B

```

Bagian 1

<p align = "center">
   <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided1a.png" alt="Alt Text">
</p>

Preprocessor <iostream> dapat digunakan untuk input maupun output dan <array> untuk menggunakan class array yang ada pada C++. Begitu pula dengan name space seperti std, cout, dan cin perlu kita panggil juga sebelum membuat programnya. Dimana pemanggilannya seperti kode pemrograman di atas.

Bagian 2

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided1b.png?raw=true)


Const PI menyatakan nilai 3.14 yang konstan tidak dapat diubah-ubah. Berikutnya kita akan mendeklarasikan function. Seperti:

- float hitungLuasPersegiPanjang(float panjang, float lebar); yang berisikan variabel panjang dan lebar.

- float hitungLuasSegitiga(float alas, float tinggi); yang berisikan variabel alas dan tinggi.

- float hitungLuasLingkaran(float jariJari); yang berisikan variabel jari-jari.

- void pesanSalam(char nama[]); digunakan untuk menyimpan nama dari pengguna yang akan diinputkan.

Bagian 3

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided1c.png?raw=true)

Berikutnya pada kodingan di atas kita membuat fungsi main yang akan dieksekusi pertama saat menjalankan program. Berikut ini jalan dari fungsi main atau fungsi utamanya:

- Di dalam fungsi main terdapat float yang merupakan variabel lokal yang dapat menyimpan panjang, lebar, alas, jari-jari. Berikutnya ada char nama yang berisikan maksimal 50 karakter dan int choice yang merupakan deklarasi agar pengguna program dapat memilih sesuai dengan inputan kodenya berupa integer.
- Pengguna diminta untuk memasukkan namanya menggunakan cin.getline() agar tidak ada masalah kode jika pengguna menginputkan spasi.
- Fungsi pesanSalam() ini digunakan untuk menyapa pengguna yang menggunakan program.
- Berikutnya menggunakan cout untuk menambahkan string yang berupa kalimat dan meminta inputan dari pengguna menggunakan cin >> choice.
- 
![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided1d.png?raw=true)

- Jika pengguna memasukkan angka 1 maka akan masuk ke case 1 yang merupakan rumus pengukuran luas persegi panjang.

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided1e.png?raw=true)
  
- Jika pengguna memasukkan angka 2 maka akan masuk ke case 2 yang merupakan rumus pengukuran luas segitiga.

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided1f.png?raw=true)
  
- Jika pengguna memasukkan angka 3 maka akan masuk ke case 3 yang merupakan rumus pengukuran luas lingkaran.
- Jika pengguna tidak memasukkan dari 3 pilihan tersebut maka akan masuk ke default yang akan mengeluarkan pesan "Pilihan tidak valid".

Return 0 pada kodingan menyatakan bahwa kode telah selesai di eksekusi dan tidak perlu diulangi lagi.

#### Output
<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/OutputUnguided1.png" alt="Alt Text">
</p>

Program kalkulator luas bangun datar.Dari output yang dihasilkan user akan diminta untuk memasukkan nama terlebih dahulu. Lalu akan diberikan salam oleh sistem setelah nama diinputkan. Berikutnya program akan menampilkan pilihan bangun datar yang dapat dihitung luasnya oleh program lalu user diminta untuk memilih dari 3 pilihan yang diberikan. Jika user memasukkan nilai diluar 3 pilihan yang diberikan maka program akan eror. Namun karena user memilih nomor 3, maka program akan mengarahkan ke perhitungan luas lingkaran. User kembali diminta untuk memasukkan jari-jari lingkarannya dan phi tidak perlu dimasukkan karena pada program phi sudah tercantum dengan nilai konstan. Sehingga hasil luas lingkaran dengan jari-jari 7 dapat muncul dengan nilai 153.86.

#### Kesimpulan

Dengan menggunakan tipe data primitif seorang programer dapat dengan mudah untuk membuat program-program sederhana seperti halnya kalkulator. Terlebih lagi tipe data primitif adalah tipe data yang langsung disediakan oleh C++ tersendiri sehingga akan sangat fleksibel dalam penggunaannya. Pada tipe data primitif ini juga terdapat berbagai macam tipe data yang populer dan sering digunakan seperti Integer, Float, Char, Void, String, Bool, dll. Namun sayangnya, tipe data primitif ini kurang direkomendasikan untuk menjangkau data yang komplekstibilitasnya tinggi.

### 2.3.2 Soal 2. Program dari class dan Struct (Manajemen Produk)

Soal :Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya 

Jawab : 

***KODE PROGRAM***

```C++
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


```

Bagian 1

<p align = "center">
   <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided2a.png" alt="Alt Text">
</p>

Pada bagian <iostream> menggunakan library input dan output standar, berikutnya ada <vector> yang menggunakan struktur data vector yang dinamis, dan <string> library yang digunakan untuk menggunakan tipe data string. Name space seperti std, cout, dan cin perlu kita panggil juga sebelum membuat programnya. Dimana pemanggilannya seperti kode pemrograman di atas.

Pada bagian struct Produk ini mendefinisikan sebuah struktur dengan nama Produk yang memiliki dua anggota yaitu nama bertipe string dan harga bertipe integer.

Bagian 2

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided2b.png?raw=true)

Pada kode di atas terdapat class dengan nama ManajemenPenjualan yang di dalamnya terdapat vector daftar produk yang bersifat privat yang akan menyimpan daftar produk yang tersedia. Berikutnya ada void tambah produk yang berisi parameter nama produk dalam string dan harga produk dalam integer yang bersifat public sehingga dapat diakses dari luar class. Di akhir daftarProduk terdapat push_back(produk) yang berguna untuk menambahkan elemen baru dibelakang vektornya seperti produk baru.

Bagian 3

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided2c.png?raw=true)

Pada kode void tampilkanDaftarProduk() bersifat publik yang berguna untuk menampilkan daftar produk yang tersedia dengan menggunakan perulangan for. For ini akan mengeksekusi perintah yang ada di dalamnya mulai dari i = 0 hingga i mencapai ukuran vektor daftarProduk. 

Bagian 4

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided2d.png?raw=true)

Bagian 4 ini merupakan main function atau fungsi utama dalam sebuah program. Dimana main function ini akan membuat objek dari manajemenPenjualan dengan memanggil tambahProduk untuk menambahkan produk ke dalam daftar dan tampilkanProduk untuk menampilkan produk yang tersedia.

#### Output
<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/OutputUnguided2.png" alt="Alt Text">
</p>

Dari output yang dihasilkan ditampilkan bahwa terdapat 3 produk yang tersedia yaitu Buku dengan harga Rp.50.000, Pensil dengan harga Rp.2.000, dan penggaris dengan harga Rp.5.000. Output ini diperoleh karena penggunaan vector yang dapat menyimpan produk. Lalu dilakukannya perulangan for untuk menambahkan daftar produk yang tersedia. Ini merupakan salah satu contoh program menggunakan class dan struct.

#### Kesimpulan

Class dan struct dapat digunakan untuk menggabungkan data dan perilaku dalam satu unit. Berikut ini beberapa hal tentang class pada bahasa C++:

- Pada C++, class merupakan cara untuk membuat data abstrak.
- Class memiliki akses yang privat dimana anggota-anggota dalam class tidak dapat diakses dari luar class kecuali menggunakan fungsi publik.
- Class dapat digunakan untuk menyembunyikan implementasi detail dari sebuah program seperti halnya program di atas.

Berbeda dengan struct, berikut ini beberapa hal tentang struct pada bahasa C++:

- Pada C++, struct memiliki akses yang semua anggota dari struct ini bersifat publik. Dalam artian anggota dari struct ini dapat diakses dari luar struct.
- Struct ini biasanya digunakan ketika menggabungkan beberapa anggota data tanpa menggunakan fungsi-fungsi yang ada.
- Penggunaan struct juga digunakan agar anggota struct mudah diakses tanpa mengggunakan fungsi getter dari luar.
- Pada kodingan di atas struct digunakan pada nama dan harga produk agar mudah di akses.


### 2.3.3 Soal 3. Program dari Fungsi Map (Nilai Mahasiswa)

Soal :Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari 
array dengan map. 

Jawab :

***KODE PROGRAM***
```C++
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

//RIZAL WAHYU PRATAMA
//2311110029
//copyright@rizal.edc2024
```

Bagian 1

<p align = "center">
   <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided3a.png" alt="Alt Text">
</p>

Pada kode di atas kita menggunakan beberapa library seperti <iostream> untuk input dn output. <map> yang digunakan untuk menyimpan data dalam bentuk key-value pairs. <string> digunakan untuk mengolah string. <iomanip> digunakan untuk mengatur tata letak output seperti lebar dan presisi output.

Bagian 2

<p align = "center">
   <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided3b.png" alt="Alt Text">
</p>

Struktur data NilaiMahasiswa memiliki dua anggota yaitu nilai mahasiswa dalam float dan grade yang menyimpan tingkatan berdasarkan nilai. Terdapat juga class 'Nilai Manager' yang dapat menyimpan dataNilai menggunakan <map> yang menyimpan nilai mahasiswa berdasarkan nama dan mata kuliah.

Bagian 3

<p align = "center">
   <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided3c.png" alt="Alt Text">
</p>\

Pada bagian ini terdapat variabel tambahNilai dengan 2 parameter yaitu nama, matkul yang menggunakan string, dan nilai yang menggunakan float yang digunakan untuk menambahkan nilai mahasiswa ke dalam map 'dataNilai' Grade juga dapat dihitung berdasarkan nilai yang diinputkan. Berikutnya ada tampilkan nilai menggunakan parameter nama menggunakan string. Dari kedua variabel ini semuanya bersifat public. Nilai yang dimasukkan memiliki batasan dari 0 hingga 100, jika keluar dari batas tersebut maka akan error.

Bagian 4

<p align = "center">
   <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided3d.png" alt="Alt Text">
</p>

Disini kita akan mendefinisikan grade-grade nilai sesuai yang kita inginkan seprti nilai di atas 79 akan mendapat grade A, nilai 70-79 grade B, nilai 60-69 grade C, nilai 50-59 grade D, di luar tersebut maka nilainya E.

Bagian 5

<p align = "center">
   <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided3e.png" alt="Alt Text">
</p>

Pada kode di atas void tampilkanNilai menggunakan parameter nama berbentuk string. Dengan ini menampilkan mahasiswa berdasarkan nama yang diberikan. Berikut algoritma sehingga kode berjalan:
1. Pengecekan apakah nama mahasiswa tersebut ada di dalam map dataNilai atau tidak.
2. Jika nama mahasiswa ditemukan maka nilai mahasiswa tersebut akan tampil.
3. Mata kuliah dan nilai akan dipasangkan menggunakan setw untuk mengatur lebar output.\
4. Jika nama mahasiswa tidak ditermukan maka akan muncul pesan "Mahasiswa dengan nama...tidak ditemukan.

Bagian 6

<p align = "center">
   <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided3f.png" alt="Alt Text">
</p>

Pada fungsi di atas dibuatlah fungsi inti atau main function. Dengan dibuatnya objek 'nilaiManager' dari kelas NilaiManager, lalu memanggil 'tambahNilai()' untuk menambahkan nilai mahasiswa, dan memanggil 'tampilkanNilai()' untuk menampilkan mahasiswa yang mau di panggil.

Return 0 menyatakan bahwa perulangan tidak perlu dilakukan dan program telah berjalan dengan normal.

#### Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/OutputUnguided3.png" alt="Alt Text">
</p>

Dari output yang dihasilkan ditampilkan mulai dari Nilai mahasiswa yang berhasil di tambahkan hingga dimunculkan dari Nama mahasiswanya, nilai fisika dan matematikanya. Salah satu contohnya adalah Mahasiswa John, nilainya berhasil diinputkan lalu muncul pada terminal hasil nilainya berupa nilai fisika 75 yang termasuk grade B, dan nilai matematika 85 yang masuk grade A. Jika nama mahasiswa tidak tercantum maka sistem akan memberikan pesan nama mahasiswa tidak ditemukan seperti contoh mahasiswa Charlie.

#### Kesimpulan

Array dan map merupakan dua struktur data yang umum digunakan pada C++. Namun perbedaan tentu ada diantaranya:

1. Penggunaan Memori

   - Array merupakan struktur data berurutan yng menyimpan elemennya pada blok memori secara terus-menerus. Ukuran array tidak dapat diubah jika sudah dikompilasi.
   - Map dalam penggunaan memorinya, mao cenderung lebih kompleks karena struktur datanya seperti tabel hash.
  
2. Pengurutan

   - Elemen array diatur sesuai dengan indeksnya, untuk pengurutan diperlukan penguruan manual.
   - Map elemennya selalu diurutkan berdasarkan key yang diberikan menggunakan fungsi-fungsi bawaan yang telah disediakan.
  
3. Fleksibilitas

   - Array harus didefinisikan terlebih dahulu pada kompilasi karena tidak dapat diubah setelahnya, sehingga dalam penambahan maupun penghapusan elemen, array kurang efektif.
   - Map memiliki kemampuan yang baik dalam penambahan maupun pengurangan elemen secara dinamis.

4. Penggunaan

   - Array dapat digunakan ketika terdapat jumlah elemen yang tetap, seperti penyimpanan elemen secara langsung dengan indeks.
   - Map dapat digunakan ketika hubungan antar key dan value terjalin atau berhubungan sehingga dibutuhkannya pengurutan berdasarkan key yang diberikan.
  
# <h2 align="center">BAB 3 PENUTUP</h2>

## 3.1 KESIMPULAN

Berdasarkan materi yang telah diberikan pada modul 1, praktikum pada modul 1 berfokus pada pengenalan tipe-tipe data yang ada pada bahasa pemrograman C++. Dari berbagai macam tipe data ini, kita dapat mengetahui dan mengelompokkan data menjadi beberapa tipe. Terdapat beberapa tipe data yang umum ditemui dan dikelompokkan dalam beberapa kategori seperti tipe data primitif, tipe data abstrak, dan tipe data koleksi. Dimana tipe data primitif ini merupakan tipe data yang telah disediakan langsung oleh bahasa C++, tipe data abstrak yang merupakan gabungan dari banyaknya tipe data sehingga fleksibel digunakan, dan tipe data koleksi yang lebih mengedepankan memberi value pada sebuah variabel yang dibentuk dengan map, array, dan lain sebagainya. Dengan mempelajari dan mempraktikkan modul 1 ini, mahasiswa mampu membuat dan mengoperasikan berbagai program dengan berbagai tipe data.

# <h2 align="center">DAFTAR PUSTAKA</h2>

ALGORITMA & PEMROGRAMAN (C++) (2016th ed.). (2016).

Dewi, L. J. E. (2016). MEDIA PEMBELAJARAN BAHASA PEMROGRAMAN C++. Revista Brasileira de Linguística Aplicada, 5(1), 1689–1699. https://revistas.ufrj.br/index.php/rce/article/download/1659/1508%0Ahttp://hipatiapress.com/hpjournals/index.php/qre/article/view/1348%5Cnhttp://www.tandfonline.com/doi/abs/10.1080/09500799708666915%5Cnhttps://mckinseyonsociety.com/downloads/reports/Educati

Gustiawan, H., Miftahuddin, Royan, S. S. D., M, R. erita, & Fitria, H. (2020). Tipe Data, Variabel Dan Operator.

Somantri, M. (2005). Membangun Sistem Komputasi Terdistribusi Dengan Pemrograman C++. Transmisi, 9(1 Juny 2005), 26 – 30.

Tammam, A. G. (n.d.). Mengenal Tipe Data dalam Pemrograman. http://tammam.id

