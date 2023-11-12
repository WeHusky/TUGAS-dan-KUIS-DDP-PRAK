#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
  // TUGAS 4//

    string country_cust, password;

    cout << setfill(' ') << setw(60) << "SELAMAT DATANG DI PERUSAHAAN MILITER\t\t" << endl;
    cout << endl;
    cout << "MASUKKAN NEGARA PEMBELI : ";

    getline(cin, country_cust);
    cout << "MASUKKAN PASSWORD : ";
    cin >> password;

    cout << setfill('-') << setw(64) << "\n";
    cout << "<                 TOKO PERLENGKAPAN MILITER                   >" << endl;
    cout << ".-------------------------------------------------------------." << endl;
    cout << "| Kd |          Nama Produk            |          Harga       |" << endl;
    cout << "|-------------------------------------------------------------|" << endl;
    cout << "| 1  | TENTARA BAYARAN                 |          50.000      |" << endl;
    cout << "| 2  | RUDAL UDARA                     |          75.000      |" << endl;
    cout << "| 3  | RUDAL DARAT                     |          70.000      |" << endl;
    cout << "| 4  | TANK                            |          40.000      |" << endl;
    cout << "| 5  | KAPAL PERANG                    |         500.000      |" << endl;
    cout << "| 6  | KENDARAAN UDARA                 |         550.000      |" << endl;
    cout << setfill('-') << setw(64) << "\n";

    int kwt_product;
    int kd_product;
    string nama_product[6];
    int harga_product[6];
    int harga_total_pembelian = 0;
    int beli_berapa;
    int jumlah_beli[6] = {0};
    long diskon;
    int pembayaran;

    cout << "MASUKKAN JUMLAH BARANG YANG AKAN DIBELI : ";
    cin >> kwt_product;

    for (int i = 0; i < kwt_product; i++)
    {
        cout << "|-------------------------------------------------------------|" << endl;
        cout << "               MASUKKAN KODE PRODUK    " << i + 1 << "  :  ";
        cin >> kd_product;
        cout << "|-------------------------------------------------------------|" << endl;

        if (kd_product == 1)
        {
            nama_product[0] = "TENTARA BAYARAN";
            harga_product[0] = 50000;
            cout << "KAMU MAU BELI BERAPA? : ";
            cin >> beli_berapa;

            cout << "NAMA PRODUK           : " << nama_product[0] << endl;
            cout << "KAMU BELI             : " << beli_berapa << endl;
            cout << "HARGA PRODUK          : RP. " << harga_product[0] << endl;
            int harga_produkJumlah = harga_product[0] * beli_berapa;
            cout << "HARGA TOTAL " << beli_berapa << " PRODUK  : RP. " << harga_produkJumlah << endl;
            harga_total_pembelian += harga_produkJumlah;
            jumlah_beli[0] += beli_berapa;
        }
        else if (kd_product == 2)
        {

            nama_product[1] = "RUDAL UDARA";
            harga_product[1] = 75000;
            cout << "KAMU MAU BELI BERAPA? : ";
            cin >> beli_berapa;

            cout << "NAMA PRODUK           : " << nama_product[1] << endl;
            cout << "KAMU BELI             : " << beli_berapa << endl;
            cout << "HARGA PRODUK          : RP. " << harga_product[1] << endl;
            int harga_produkJumlah = harga_product[1] * beli_berapa;
            cout << "HARGA TOTAL " << beli_berapa << " PRODUK  : RP. " << harga_produkJumlah << endl;
            harga_total_pembelian += harga_produkJumlah;
            jumlah_beli[1] += beli_berapa;
        }
        else if (kd_product == 3)
        {

            nama_product[2] = "RUDAL DARAT";
            harga_product[2] = 70000;
            cout << "KAMU MAU BELI BERAPA? : ";
            cin >> beli_berapa;

            cout << "NAMA PRODUK           : " << nama_product[2] << endl;
            cout << "KAMU BELI             : " << beli_berapa << endl;
            cout << "HARGA PRODUK          : RP. " << harga_product[2] << endl;
            int harga_produkJumlah = harga_product[2] * beli_berapa;
            cout << "HARGA TOTAL " << beli_berapa << " PRODUK  : RP. " << harga_produkJumlah << endl;
            harga_total_pembelian += harga_produkJumlah;
            jumlah_beli[2] += beli_berapa;
        }
        else if (kd_product == 4)
        {

            nama_product[3] = "TANK";
            harga_product[3] = 40000;
            cout << "KAMU MAU BELI BERAPA? : ";
            cin >> beli_berapa;

            cout << "NAMA PRODUK           : " << nama_product[3] << endl;
            cout << "KAMU BELI             : " << beli_berapa << endl;
            cout << "HARGA PRODUK          : RP. " << harga_product[3] << endl;
            int harga_produkJumlah = harga_product[3] * beli_berapa;
            cout << "HARGA TOTAL " << beli_berapa << " PRODUK  : RP. " << harga_produkJumlah << endl;
            harga_total_pembelian += harga_produkJumlah;
            jumlah_beli[3] += beli_berapa;
        }
        else if (kd_product == 5)
        {

            nama_product[4] = "KAPAL PERANG";
            harga_product[4] = 500000;
            cout << "KAMU MAU BELI BERAPA? : ";
            cin >> beli_berapa;

            cout << "NAMA PRODUK           : " << nama_product[4] << endl;
            cout << "KAMU BELI             : " << beli_berapa << endl;
            cout << "HARGA PRODUK          : RP. " << harga_product[4] << endl;
            int harga_produkJumlah = harga_product[4] * beli_berapa;
            cout << "HARGA TOTAL " << beli_berapa << " PRODUK  : RP. " << harga_produkJumlah << endl;
            harga_total_pembelian += harga_produkJumlah;
            jumlah_beli[4] += beli_berapa;
        }
        else if (kd_product == 6)
        {

            nama_product[5] = "KENDARAAN UDARA";
            harga_product[5] = 550000;
            cout << "KAMU MAU BELI BERAPA? : ";
            cin >> beli_berapa;

            cout << "NAMA PRODUK           : " << nama_product[5] << endl;
            cout << "KAMU BELI             : " << beli_berapa << endl;
            cout << "HARGA PRODUK          : RP. " << harga_product[5] << endl;
            int harga_produkJumlah = harga_product[5] * beli_berapa;
            cout << "HARGA TOTAL " << beli_berapa << " PRODUK  : RP. " << harga_produkJumlah << endl;
            harga_total_pembelian += harga_produkJumlah;
            jumlah_beli[5] += beli_berapa;
        }
    }
    cout << endl;
    cout << "---------------Press any button to continue-------------------" << endl;

    getch();

    char lanjut;
    int menubayar;
    int nomerkartu;
    do
    {
        do
        {
            system("CLS");
            cout << endl;
            cout << ">>> BAYAR DULU YAH <<<" << endl;
            cout << "\n"
                 << setfill('=') << setw(63) << "=" << endl;
            cout << right << setw(40) << setfill(' ') << "Struk Kasir\n";
            cout << setfill('=') << setw(63) << "=" << endl;
            cout << left << setfill(' ') << setw(4) << "Kd" << setw(20) << "Nama Barang" << setw(10) << "Jumlah" << setw(15) << "Harga Satuan" << setw(15) << "Total Harga" << endl;
            cout << setfill('-') << setw(63) << "-" << endl;

            for (int i = 0; i < 6; i++)
            {
                if (jumlah_beli[i] > 0)
                {
                    cout << left << setfill(' ') << setw(4) << (i + 1);
                    cout << left << setfill(' ') << setw(22) << nama_product[i];
                    cout << left << setfill(' ') << setw(10) << jumlah_beli[i];
                    cout << left << setfill(' ') << setw(15) << harga_product[i];
                    cout << left << setfill(' ') << setw(15) << harga_product[i] * jumlah_beli[i] << endl;
                }
            }

            cout << setfill('=') << setw(63) << "=" << endl;

            if (harga_total_pembelian >= 750000)
            {
                diskon = harga_total_pembelian / 2;

                cout << ">>> SELAMAT ANDA DAPAT DISKON 50% ! <<< " << endl;

                cout << "TOTAL HARGA ADALAH             : " << harga_total_pembelian - diskon << endl;
            }
            else
            {
                cout << ">>> MAAP GAADA DISKON HEHE <<<" << endl;
                cout << "TOTAL HARGA ADALAH             : " << harga_total_pembelian << endl;
            }

            cout << "Lanjut Pembayaran? (y/n): ";
            cin >> lanjut;
        } while (lanjut == 'n' || lanjut == 'N');

        cout << "Menu Pembayaran :" << endl;
        cout << "1. Cash" << endl;
        cout << "2. Debit" << endl;
        cout << "Pilih : ";

        cin >> menubayar;

        if (menubayar == 1)
        {
            cout << "Anda Memilih Cash" << endl;
            cout << "Silakan Masukkan Nominal  : ";
            cin >> pembayaran;
            if (pembayaran >= harga_total_pembelian)
            { // harga tidak diskon

                cout << "Kembalian kamu   : " << pembayaran - harga_total_pembelian;
                cout << endl;
                cout << "Makasih YAHHHHH <3" << endl;
            }
            else if (pembayaran >= harga_total_pembelian - diskon)
            {
                cout << "Kembalian kamu   : " << pembayaran - (harga_total_pembelian - diskon);
                cout << endl;
                cout << "Makasih YAHHHHH <3" << endl;
            }
            else
            {
                cout << "Uang Kamu Kurang !!!" << endl;
                cout << "Klik untuk kembali !" << endl;
                getch();
            }
        }

        else if (menubayar == 2)
        {
            cout << "Anda Memilih Debit" << endl;
            cout << "Silakan Masukkan Nomor Kartu (nim)  : ";
            cin >> nomerkartu;
            cout << "Pembayaran diproses ......." << endl;
            cout << "click.." << endl;
            getch();
            cout << "Pembayaran Berhasil <3" << endl;
            break;
        }

    } while (pembayaran < harga_total_pembelian);

    /*1. pembayaran
    2. pilih bayar atau tidak
    3. jika tidak, kembali ke struk dan pembayaran, berulang sampai bayar, lalu mampilkan kembalian setelah pembayaran
    4. opsi pembayaran tunai dan non
    5. lakukan do while untuk kembali ke awal lagi.*/
    return 0;
}
