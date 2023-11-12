#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
    // Deklarasi var
    string usn, pass;
    string barang[5] = {"Buku Tulis", "Buku Gambar", "Pensil Warna", "Pensil","Penghapus"};
    int harga[5] = {5000, 7000, 13000, 4500, 2000}, jmlBrg[5] = {0}, jmlBeli, noBrg;
    float hargaTot[5] = {0};

    char lanjut;

    do
    {
        cout << "Welcome...\nSilakan login terlebih dahulu...\n"
             << endl;
        cout << "Username: ";
        cin >> usn;
        cout << "Password: ";
        cin >> pass;

        // Validasi usn dan pass
        if (usn == "zeva" && pass == "124230043")
        {
            cout << "Login berhasil!\n\n";

            cout << "\n"
                 << setfill('=') << setw(58) << "=" << endl;
            cout << right << setw(35) << setfill(' ') << "Toko Alat Tulis\n";
            cout << setfill('=') << setw(58) << "=" << endl;
            cout << left << setfill(' ') << setw(4) << "No" << setfill(' ') << setw(35) << "Nama Barang" << setfill(' ') << setw(10) << "Harga" << endl;
            cout << setfill('-') << setw(58) << "-" << endl;

            for (int index = 0; index < 5; index++)
            {
                int num = index + 1;
                cout << left << setfill(' ') << setw(4) << num << setfill(' ') << setw(35) << barang[index] << setfill(' ') << setw(3) << "Rp " << harga[index] << endl;
                continue;
            }
            cout << setfill('=') << setw(58) << "=" << endl;

            // Input jumlah barang yang akan dibeli
            cout << "\nMasukkan jumlah barang yang akan dibeli : ";
            cin >> jmlBeli;

            // Input informasi barang
            for (int i = 0; i < jmlBeli; i++)
            {
                cout << "\nInput barang ke-" << i + 1;
                cout << "\nMasukkan no barang : ";
                cin >> noBrg;

                cout << "Nama Barang   : " << barang[noBrg - 1] << endl;
                cout << "Harga Barang  : Rp " << harga[noBrg - 1] << endl;
                cout << "Jumlah Beli   : ";
                cin >> jmlBrg[noBrg - 1];
                hargaTot[noBrg - 1] = harga[noBrg - 1] * jmlBrg[noBrg - 1];
                cout << "Harga Beli    : Rp " << hargaTot[noBrg - 1] << endl;
            }

            // Menghitung total harga
            float totalHarga = 0;
            for (int i = 0; i < 5; i++)
            {
                totalHarga += hargaTot[i];
            }
            
            

            // Potongan harga
            float diskon, hargaAkhir, tunai, kembalian;

            if (totalHarga >= 75000 and totalHarga <= 99999)
            {
                diskon = totalHarga * 0.10;
            }
            else if (totalHarga >= 100000)
            {
                diskon = totalHarga * 0.30;
            }
            else
            {
                diskon = 0; // Tidak ada diskon
            }
            hargaAkhir = totalHarga - diskon;

            cout << "\n" << setfill('=') << setw(58) << "=" << endl;
            cout << right << setw(35) << setfill(' ') << "Struk Kasir\n";
            cout << setfill('=') << setw(58) << "=" << endl;
            cout << left << setfill(' ') << setw(4) << "No" << setfill(' ') << setw(35) << "Nama Barang" << setfill(' ') << setw(10) << "Jumlah" << setw(12) << "Harga" << endl;
            cout << setfill('-') << setw(58) << "-" << endl;

            for (int i = 0; i < 5; i++)
            {
                if (jmlBrg[i] > 0)
                {
                    float subTotal = hargaTot[i];
                    cout << setw(4) << setfill(' ') << (i + 1) << setw(35) << setfill(' ') << barang[i] << setw(10) << jmlBrg[i] << setw(3) << "Rp " << subTotal << endl;
                }
            }

            cout << setfill('=') << setw(58) << "=" << endl;
            cout << "Total Harga          : Rp " << fixed << setprecision(2) << totalHarga << endl;
            cout << "Diskon               : Rp " << fixed << setprecision(2) << diskon << endl;
            cout << "Harga setelah diskon : Rp " << fixed << setprecision(2) << hargaAkhir << endl;
            cout << "Tunai                : Rp ";
            cin >> tunai;

            kembalian = tunai - hargaAkhir;

            cout << "Kembalian : Rp " << fixed << setprecision(2) << kembalian << endl;
            cout << setfill('=') << setw(58) << "=" << endl;
			 
	

            cout << "Ingin melanjutkan belanja? (Y/N): ";
            cin >> lanjut;
        }
        else
        {
            cout << "Maaf, username dan password salah\nProgram akan berakhir...";
            lanjut = 'N'; // Keluar program
            exit(0);
        }
        
        // Reset jumlah barang yang dibeli dan total harga per barang
            for (int i =0; i < 5; i++)
            {
				jmlBrg[i] = 0;
				hargaTot[i] = 0.0;
			}
			
    } while (lanjut == 'Y' || lanjut == 'y');

    return 0;
}
