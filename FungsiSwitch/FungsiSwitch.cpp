#include <iostream>
using namespace std;

int bilA, bilB;

void input()
{
    cout << "Masukkan bilangan pertama = ";
    cin >> bilA;
    cout << "Masukkan bilangan kedua = ";
    cin >> bilB;
}
int penjumlahan(int a, int b)
{
    return a + b;
}
int pengurangan(int a, int b)
{
    return a - b;
}
int perkalian(int a, int b)
{
    return a * b;
}
int pembagian(float a, float b)
{
    return a / b;
}

int main()
{
    int pilihan;
    do
    {
        cout << "Kalkulator Sederhana" << endl;
        cout << "====================" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. keluar" << endl;
        cout << "=====================" << endl;
        cout << "Masukkan menu pilihan : ";
        cin >> pilihan;

        switch (pilihan)
        {
