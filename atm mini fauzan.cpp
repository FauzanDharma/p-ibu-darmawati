#include <iostream>
#include <string>
using namespace std;

int main() {
    string sandi = "fauzan";
    int saldo = 1000000;
    string inputSandi;
    int pilihan;
    int jumlah;

    cout << "Selamat datang di ATM!" << endl;

    // Login
    for (int i = 0; i < 3; i++) {
        cout << "Masukkan sandi ATM: ";
        cin >> inputSandi;

        if (inputSandi == sandi) {
            cout << "Login berhasil!" << endl;
            break;
        } else {
            cout << "Sandi salah! Silakan coba lagi." << endl;
            if (i == 2) {
                cout << "Kartu ATM Anda diblokir!" << endl;
                return 0;
            }
        }
    }

    // Menu
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Penarikan" << endl;
        cout << "2. Penyetoran" << endl;
        cout << "3. Cek Saldo" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan jumlah penarikan: ";
                cin >> jumlah;
                if (jumlah <= saldo) {
                    saldo -= jumlah;
                    cout << "Penarikan berhasil! Saldo Anda sekarang: " << saldo << endl;
                } else {
                    cout << "Saldo tidak mencukupi!" << endl;
                }
                break;
            case 2:
                cout << "Masukkan jumlah penyetoran: ";
                cin >> jumlah;
                saldo += jumlah;
                cout << "Penyetoran berhasil! Saldo Anda sekarang: " << saldo << endl;
                break;
            case 3:
                cout << "Saldo Anda: " << saldo << endl;
                break;
            case 4:
                cout << "Terima kasih telah menggunakan ATM!" << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid!" << endl;
                break;
        }
    }

    return 0;
}

