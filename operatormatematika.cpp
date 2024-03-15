#include <iostream>
using namespace std;

// membuat code inti atau main code
int main()
{
    char op;
    cout<<"Selamat datang di kalkulator digital by Rizal"<<endl<<endl;
    cout<<""<<endl;
    float num1, num2; //menginisiasi num1 dan num2 yang akan digunakan

    cout << "Masukkan operator: "; // meminta inputan operator
    cin >> op;

    cout << "Masukkan nomor pertama: "; 
    cin >> num1;

    cout << "Masukkan nomor kedua: "; 
    cin >> num2;

    switch(op)
    {
    case '+':
        cout << "Hasil: " << num1 + num2;
        break;
    case '-':
        cout << "Hasil: " << num1 - num2;
        break;
    case '*':
        cout << "Hasil: " << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            cout << num1 / num2;
        else
            cout << "Error! Division by zero!";
        break;
    default:
        cout << "Operator tidak ditemukan. Silakan coba lagi!";
    }

    return 0;
}

