#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

mahasiswa sikc[30];

int pos = -1;

void dMenu()
{
    system("cls");
    cout << "Aplikasi KelasQ" << "\n";
    cout << "1. Masukkan data" << "\n";
    cout << "2. Tampilkan data" << "\n";
    cout << "3. Perbaikan data" << "\n";
    cout << "4. Menghapus data" << "\n";
    cout << "5. Exit" << "\n";
    cout << "Masukan angka :";
}

int main()
{
    int pos = -1;

    do
    {
        dMenu();
        pl = getch();

        switch (pl)
        {
        case '1':
        {
            pos++;
            system("cls");
            fflush(stdin);
            cout << "masukan nim: ";
            getline(cin, sikc[pos].nim);
            cout << "masukan nama: ";
            getline(cin, sikc[pos].nama);
            cout << "masukan alamat: ";
            getline(cin, sikc[pos].alamat);
            cout << "masukan ipk: ";
            cin >> sikc[pos].ipk;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
    return 0;
}
 }
 }
}