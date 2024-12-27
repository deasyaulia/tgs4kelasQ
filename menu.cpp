#include <iostream>
#include <string>
#include <conio.h>
#include <limits>
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

void tampilkanData(int p)
{
    cout << sikc[p].nim << " , " << sikc[p].nama << " , " << sikc[p].alamat << " , " << sikc[p].ipk << endl;
}

void perbaikanData(int p)
{
    system("cls");
    cout << "Masukkan nama: ";
    getline(cin, sikc[p].nama);
    cout << "Masukkan alamat: ";
    getline(cin, sikc[p].alamat);
    cout << "Masukkan IPK: ";
    cin >> sikc[p].ipk;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main()
{
    char pl;

    do
    {
        dMenu();
        pl = getch();

        switch (pl)
        {
        case '1':
            if (pos < 29) // Pastikan tidak melampaui batas array
            {
                pos++;
                system("cls");
                cout << "Masukkan nim: ";
                getline(cin, sikc[pos].nim);
                cout << "Masukkan nama: ";
                getline(cin, sikc[pos].nama);
                cout << "Masukkan alamat: ";
                getline(cin, sikc[pos].alamat);
                cout << "Masukkan IPK: ";
                cin >> sikc[pos].ipk;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else
            {
                cout << "Data sudah penuh!" << endl;
            }
            break;

        case '2':
            system("cls");
            if (pos == -1) {
                cout << "Belum ada data!" << endl;
            } else {
                for (int i = 0; i <= pos; i++) {
                    tampilkanData(i);
                }
            }
            break;

        case '3':
            system("cls");
            int index;
            cout << "Masukkan nomor data yang ingin diperbaiki: ";
            cin >> index;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (index >= 0 && index <= pos) {
                perbaikanData(index);
            } else {
                cout << "Nomor tidak valid!" << endl;
            }
            break;

        case '4':
            // Fungsi menghapus data bisa ditambahkan di sini jika perlu
            break;

        case '5':
            cout << "Terima kasih, keluar..." << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
        }
        
        if (pl != '5') {
            cout << "Tekan sembarang tombol untuk melanjutkan...";
            getch(); // Menunggu input sebelum kembali ke menu
        }

    } while (pl != '5');

    return 0;
}
