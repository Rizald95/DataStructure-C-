#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Transaksi {
    int bulan;
    double nilai;
};

vector<Transaksi> transaksiBulanan;

void tambahTransaksi() {
    Transaksi transaksi;
    cout << "Masukkan bulan: ";
    cin >> transaksi.bulan;
    cout << "Masukkan nilai: ";
    cin >> transaksi.nilai;
    
    transaksiBulanan.push_back(transaksi);
    cout << "Transaksi berhasil ditambahkan." << endl;
}

void tampilkanLaporan() {
    cout << "==== Laporan Transaksi Bulanan ====" << endl;
    cout << "Bulan\tNilai" << endl;
    
    for (const auto& transaksi : transaksiBulanan) {
        cout << transaksi.bulan << "\t" << transaksi.nilai << endl;
    }
    
    cout << "===================================" << endl;
}

void tampilkanInformasiTagihan() {
    double total = 0.0;
    for (const auto& transaksi : transaksiBulanan) {
        total += transaksi.nilai;
    }
    
    cout << "Total tagihan bulanan: " << total << endl;
}

int main() {
    int pilihan;
    
    do {
        cout << "=== Menu ===" << endl;
        cout << "1. Tambah Transaksi Bulanan" << endl;
        cout << "2. Tampilkan Laporan" << endl;
        cout << "3. Tampilkan Informasi Tagihan" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                tambahTransaksi();
                break;
            case 2:
                tampilkanLaporan();
                break;
            case 3:
                tampilkanInformasiTagihan();
                break;
            case 0:
                cout << "Terima kasih. Sampai jumpa!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
        
        cout << endl;
    } while (pilihan != 0);
    
    return 0;
}

