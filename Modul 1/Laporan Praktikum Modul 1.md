# <h1 align="center">Laporan Praktikum Modul 1 Tipe Data</h1>
<p align="center">Rizal Wahyu Pratama</p>

# <h2 align="center">BAB 1 PENDAHULUAN</h2>

**1.1 Latar Belakang**

Memahami cara komputer dalam mengoperasikan sesuatu bukanlah hal yang mudah, hal ini perlu pengetahuan khusus yang mendalam. Komputer dapat dengan mudah dan efisien melakukan pekerjaan yang terasa sulit dikerjakan manusia dalam kehidupan sehari-hari. Komputer memiliki bahasanya sendiri untuk mengoperasikan suatu pekerjaan, dan bahasa ini disebut dengan bahasa pemrograman.

Bahasa pemrograman, atau sering diistilahkan dengan bahasa komputer, merupakan teknik komando atau intruksi standar untuk memerintah komputer(Luh Joni). Dalam dunia pemrograman terdapat banyak bahasa pemrograman yang dapat digunakan untuk mengoperasikan suatu komputer dan membentuk suatu sistem komputer, salah satu bahasa tersebut adalah C++.  Bahasa C++ dapat digunakan juga untuk membuat aplikasi yang didistribusikan ke beberapa mesin (Maman Somantri). Dengan memprogram suatu aplikasi yang didistribusikan ke beberapa mesin, seseorang dapat mengarahkan mesin sesuai yang diinginkannya.

Pada tahun 1980 seorang ahli yang bernama Bjarne Stroustrup mengembangkan beberapa hal dari bahasa C yang dinamakan “C with Classes” yang pada mulanya disebut “a better C” dan berganti nama pada tahun 1983 menjadi C++ oleh Rick Mascitti, dibuat di Laboratorium Bell, AT&T (Modul). Pengembangan bahasa C terus berlanjut, hingga pada C++ ini ditambahkan konsep yang baru seperti class yang sifatnya Object Oriented Programming (OOP) dengan tujuan mempermudah programer dalam mengelola program yang kompleks.

Dalam memprogram sebuah komputer diperlukannya pengkodean dengan berbagai macam tipe data yang ada di dalamnya, sama halnya dengan bahasa C++ untuk membentuk kode program diperlukan pemahaman yang mendalam tentang tipe data. Bahasa C++ memiliki berbagai tipe data yang dapat dieksplor secara mendalam oleh penggunanya, seperti integer, float, boolean, char, string, dan lain sebagainya.

**1.2 Rumusan Masalah**

Berdasarkan latar belakang di atas, penulis telah merumuskan beberapa masalah yang akan di bahas dalam laporan praktikum ini, sebagai berikut:

1.	Apa yang dimaksud dengan tipe data primitif, abstrak, dan kolektif?
2.	Bagaimana pengaplikasian pada tools yang digunakan?
3.	Bagaimana pengaplikasian berbagai tipe data pada bahasa pemrograman C++?

**1.3 Tujuan**

Berikut ini merupakan rumusan tujuan yang dapat dicapai dengan dituliskannya laporan praktikum ini, sebagai berikut:
1.	Mahasiswa dapat mempelajari tipe data primitif, abstrak, dan kolektif. 
2.	Mahasiswa dapat memahami pengaplikasian pada tools yang digunakan.
3.	Mahasiswa mengaplikasikan berbagai tipe data pada bahasa pemograman yang telah ditentukan.

**BAB 2**

**2.1 Dasar Teori**

Bahasa pemrograman, merupakan suatu komando atau perintah yang dibuat manusia untuk membuat komputer menjadi memiliki fungsi tertentu (Hafhis). Bahasa pemrograman bermacam-macam, salah satunya adalah bahasa C++, dimana bahasa ini sangat populer digunakan pada kalangan programer. Seperti bahasa pemrograman lainnya, bahasa C++ juga dapat digunakan untuk mengolah data dengan cukup baik. 

Data adalah fakta-fakta yang berupa angka-angka, teks, dokumen, gambar, bagan, suara, yang mewakili deskripsi verbal atau kode tertentu, dan semacamnya(Aditya). Dari berbagai macam jenis data ini, kita dapat mengetahui dan mengelompokkan data menjadi beberapa tipe. Terdapat beberapa tipe data yang umum ditemui dan dikelompokkan dalam beberapa kategori seperti tipe data primitif, tipe data abstrak, dan tipe data koleksi.

Tipe data ini perlu diketahui agar compiler dapat mengetahui bagaimana sebuah data akan digunakan dan diperlakukan (Nauviana Pita). Dengan memahami tipe-tipe data yang digunakan, seorang compiler dapat mempercepat pekerjaannya dalam melakukan pemrograman karena masing-masing tipe data memiliki ciri khasnya masing-masing dan dengan ukuran yang berbeda-beda. Berikut ini merupakan penjabara dari tipe data primitif, tipe data abstrak, dan tipe data koleksi.

**2.1.1 Tipe Data Primitif**

Tipe data ini merupakan tipe data yang paling sering digunakan oleh programer karena tipe data primitif ini merupakan tipe data bawaan dari C++ yang dapat dengan langsung untuk digunakan. Tipe data primitif ini memungkinkan programer untuk mengelola berbagai jenis data dengan waktu efisien. Berikut ini merupakan tipe data primitif yang umum digunakan pada bahasa pemrograman C++:
1.	Integer (int)	: Tipe data yang digunakan untuk menyimpan berbagai bilangan bulat seperti 1,2,3,4,5,....,n
2.	Float/Double	: Tipe data yang digunakan untuk menyimpan berbagai bilangan pecahan seperti 3.147, 7.98, 0,00018,…,n
3.	Char		: Tipe data yang digunakan untuk menyimpan berbagai karakter tunggal seperti `R`,`I`,`Z`,`A`,`L`, dan lainnya.
4.	Boolean	: Tipe data yang hanya memiliki dua nilai di dalamnya yaitu benar (True) dan salah (False). 
5.	Void		: Tipe data yang biasanya digunakan untuk menyatakan tidak adanya data.
   
Dengan tipe data primitif, seorang programmer dapat mengolah berbagai jenis data dengan tipe yang disediakan bahasa C++.

**2.1.2 Tipe Data Abstrak**

Tipe data abstrak atau yang biasa disebut Abstrak Data Type(ADT) banyak digunakan oleh programmer dalam membuat sebuah program. Seperti namanya, tipe data abstrak memiliki struktur yang abstrak, dimana merupakan gabungan dari beberapa tipe data. Dalam pemrograman komputer, tipe data abstrak memungkinkan programer untuk dapat mendefinisikan berbagai tipe data tanpa harus memberikan detail implementasi dari tipe data yang digunakan. 

Pada tipe data abstrak terdapat kelas tipe. Dimana kelas abstrak ini dapat bertindak sebagai ekspresi konsep umum yang merupakan tempat yang lebih spesifik dalam tipe data. Fitur kelas yang terdapat pada C++ adalah Object Oriented Program(OOP) yang dapat membungkus tipe data yang ada di dalamnya sebagai anggota.

**2.1.3 Tipe Data Koleksi**

Collection Data Type(CDT) merupakan tipe data yang digunakan untuk menyimpan beberapa value atyau objek secara bersamaan. Tipe data koleksi memungkinkan programmer untuk mengolah berbagai data besar dengan cara yang efisien dan terstruktur. Terdapat beberapa tipe data koleksi yang sering digunakan sebagai berikut:

1.	Array	: Tipe data yang digunakan untuk mengumpulkan elemen data dengan tipe yang sama saja. Seperti array yang hanya berisi kumpulan bilangan bulat.
2.	String	: Tipe data yang digunakan untuk membuat kumpulan karakter yang dapat juga membentuk kalimat. Seperti `Rizal`, `Rizal orangnya baik`, dan lain sebagainya.
3.	Vector	: Vector memiliki kemiripan dengan array, namun ukurannya yang dapat diubah secara dinamis. Vector ini dapat menyediakan operasi penambahan dan pengurangan elemen dengan lebih mudah.
4.	Struct	: Tipe data ini yang dapat berisi dari beberapa tipe data dasar.  Struct ini dapat memiliki lebih dari satu jenis data.
   
Empat tipe data di atas merupakan beberapa contoh dari tipe data koleksi yang sering digunakan di kalangan programer. Tipe data ini merupakan turunan dari bahasa C namun tetap memiliki perbedaan di dalamnya.

**2.2 Guided**

Pada praktikum ini penulis telah mendapatkan beberapa latihan mengenai berbagai tipe data. Latihan tersebut akan dijelaskan perbagiannya, sebagai berikut:

**2.2.1 Guided Tipe Data Primitif (Program Kalkulator Sederhana)**
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

Output Program

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/OutputGuided1.png" alt="Alt Text">
</p>


**2.2.2 Guided Tipe Data Abstrak (Data Mahasiswa)**

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

**2.2.3 Tipe Data Koleksi (Nilai Array)** 

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

**2.3 Unguided**

Pada praktikum Algoritma dan Struktur Data, penulis diberikan studi kasus sebagai bentuk penerapan dari latihan yang diberikan. Berikut ini merupakan studi kasus yang diberikan:

**2.3.1 Soal 1. Tipe Data Primitif (Menghitung Luas Bangun Datar)**

Soal : Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. 
Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari 
materi tipe data primitif! 

Jawab :

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

Kesimpulan:



**2.3.2 Program dari class dan Struct (Manajemen Produk)**

Soal :Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya 

Jawab : 

Bagian 1

<p align = "center">
   <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided2a.png" alt="Alt Text">
</p>

Pada bagian <iostream> menggunakan library input dan output standar, berikutnya ada <vector> yang menggunakan struktur data vector yang dinamis, dan <string> library yang digunakan untuk menggunakan tipe data string. Name space seperti std, cout, dan cin perlu kita panggil juga sebelum membuat programnya. Dimana pemanggilannya seperti kode pemrograman di atas.

Pada bagian struct Produk ini mendefinisikan sebuah struktur dengan nama Produk yang memiliki dua anggota yaitu nama bertipe string dan harga bertipe integer.

Bagian 2

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided2b.png?raw=true)

Pada bagian class ini mendefinisikan sebuah class dengan nama ManajemenPenjualan. Di dalam manajemen penjualan ini terdapat vector yang akan menyimpan daftar produk yang tersedia. Berikutnya ada public yang berguna untuk akses semua anggota dapat diakses dari luar class. Dalam public terdapat void tambahProduk yang memiliki parameter untuk menampung string nama barang dan integer harga barang. Terdapat push_back(produk) pada akhir kode tambah produk yang digunakan untuk menambahkan elemen baru dibelakang vektor seperti menambahkan objek produk ke dalam vektor daftar produk.

Bagian 3

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided2c.png?raw=true)

Bagian 4

![alt text](https://github.com/rizaledc/Praktikum-Struktur-Data-Assignment/blob/main/Modul%201/Lap.%20Algoritma%20dan%20Struktur%20Data/unguided2d.png?raw=true)
