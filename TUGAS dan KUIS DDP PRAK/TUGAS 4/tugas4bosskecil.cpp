#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
    /*string negara2;
    long korban1, korban2;
    long jumlah_pasukan1, jumlah_pasukan2;
    float pesawat1, kapal1, rudal1, peluru1;
    float pesawat2, kapal2, rudal2, peluru2;


    int pilih_blok1;
    cout << setfill('=') << setw(120) << "\n";
    cout << setfill(' ') << setw(67) << " PERANG DUNIA KE 2\t\t" << endl;
    cout << setfill('=') << setw(120) << "\n";
    cout << setfill(' ') << setw(80) << " PILIH BLOK NEGARA UNTUK MELAWAN INDONESIA" << endl;
    cout << " ==PILIH BLOK==" << endl;
    cout << "1. BLOK POROS " << endl;
    cout << "2. BLOK SEKUTU " << endl;
    cout << "PILIH 1 atau 2 = ";
    cin >> pilih_blok1;

    system ("cls");

    if (pilih_blok1 == 1)
    {
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(70) << " ANDA MEMILIH BLOK POROS " << endl;
        cout << setfill('-') << setw(120) << "\n";
        cout << " -NEGARA DI BLOK POROS " << std::endl;
        cout << " 1. JERMAN " << endl;
        cout << " 2. ITALIA " << endl;
        cout << " 3. JEPANG " << endl;
    }
    else
    {
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(70) << " ANDA MEMILIH BLOK SEKUTU " << endl;
        cout << setfill('-') << setw(120) << "\n";
        cout << " -NEGARA DI BLOK SEKUTU " << endl;
        cout << " 4. INGGRIS " << endl;
        cout << " 5. AMERIKA " << endl;
        cout << " 6. UNI SOVIET " << endl;
    }
    int kode_negara;
    cout << "Masukkan kode negara (angka) = ";
    cin >> kode_negara;
    switch (kode_negara)
    {
    case 1:
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(60) << " JERMAN \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";
        break;
    case 2:
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(65) << " ITALIA \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";
        break;
    case 3:
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(65) << " JEPANG \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";
        break;
    case 4:
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(65) << " INGGRIS \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";
        break;
    case 5:
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(65) << " AMERIKA \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";
        break;
    case 6:
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(65) << " UNI SOVIET \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";
        break;
    }
    int jendral;
    cout << "MASUKKAN JUMLAH JENDRAL :";
    cin >> jendral;
    string nama[jendral];
    for (int i = 0; i < jendral; i++)
    {
        cout << "NAMA JENDRAL " << i + 1 << "\t\t\t:";
        cin.ignore();
        getline(cin, nama[i]);
        cout << "JUMLAH PASUKAN " << i + 1 << "\t\t:";
        cin >> nama[i];
    }
    cout << "Jumlah Pasukan Negara \t\t:";
    cin >> jumlah_pasukan1;
    cout << "Jumlah Peluru \t\t\t:";
    cin >> peluru1;
    cout << "Jumlah Pesawat \t\t\t:";
    cin >> pesawat1;
    cout << "Jumlah Rudal \t\t\t:";
    cin >> rudal1;
    cout << "Jumlah Kapal \t\t\t:";
    cin >> kapal1;
    cout << "Jumlah Korban \t\t\t:";
    cin >> korban1;
    cout << setfill('-') << setw(120) << "\n";
    cout << setfill(' ') << setw(64) << " INDONEASIA\t\t" << endl;
    cout << setfill('-') << setw(120) << "\n";
    // Kedua
    cout << "Jumlah Pasukan Negara \t\t:";
    cin >> jumlah_pasukan2;
    cout << "Jumlah Peluru \t\t\t:";
    cin >> peluru2;
    cout << "Jumlah Pesawat \t\t\t:";
    cin >> pesawat2;
    cout << "Jumlah Rudal \t\t\t:";
    cin >> rudal2;
    cout << "Jumlah Kapal \t\t\t:";
    cin >> kapal2;
    cout << "Jumlah Korban \t\t\t:";
    cin >> korban2;
    cout << setfill('=') << setw(120) << "\n";
    cout << setfill(' ') << setw(100) << "DATA STATISTIK KEMATIAN KORBAN DAN INVENTARIS PADA PERANG DUNIA KE 2\t\t " << endl;
    cout << setfill('=') << setw(120) << "\n";
    float Korban_Total = korban1 + korban2;
    float Total_Amunisi_Rudal = rudal1 + rudal2;
    float Total_Amunisi_Peluru = peluru1 + peluru2;
    float Total_Kendaraan_Perang = pesawat1 + pesawat2 + kapal1 + kapal2;
    float Total_pasukan = jumlah_pasukan1 + jumlah_pasukan2;
    char negara[25] = "Indonesia";

    if (pilih_blok1 == 1)
    {
        cout << "Anda Memilih Blok\t\t:Poros VS " << negara << endl;
    }
    else
    {
        cout << "Anda Memilih Blok\t\t:Sekutu VS " << negara << endl;
    }

    cout << "Jumlah jendral\t\t\t:" << jendral << endl;
    cout << "Korban Pasukan\t\t\t:" << Total_pasukan << endl;
    cout << "Korban Total\t\t\t:" << Korban_Total << endl;
    cout << "Total Amunisi Rudal\t\t:" << Total_Amunisi_Rudal << endl;
    cout << "Total Amunisi Peluru\t\t:" << Total_Amunisi_Peluru << endl;
    cout << "Total Kendaraan Perang\t\t:" << Total_Kendaraan_Perang << endl;


    system ("cls");*/

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
    long diskon, hargaAkhir;
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
                diskon = harga_total_pembelian * 1 / 2;
                hargaAkhir = harga_total_pembelian - diskon;
                cout << ">>> SELAMAT ANDA DAPAT DISKON 50% ! <<< " << endl;
                cout << "HARGA AKHIR SEBELUM DISKON     : " << harga_total_pembelian << endl;
                cout << "HARGA AKHIR SETELAH DISKON     : " << hargaAkhir << endl;
                cout << "TOTAL HARGA ADALAH             : " << hargaAkhir << endl;
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
            {  // harga tidak diskon

                cout << "Kembalian kamu   : " << pembayaran - harga_total_pembelian;
                cout << endl;
                cout << "Makasih YAHHHHH <3" << endl;
            }
            else if (pembayaran >= hargaAkhir)
            { // harga untuk diskon

                cout << "Kembalian kamu   : " << pembayaran - hargaAkhir;
                cout << endl;
                cout << "Makasih YAHHHHH <4" << endl;
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

        
    } while (pembayaran < harga_total_pembelian && pembayaran < hargaAkhir);

    /*1. pembayaran
    2. pilih bayar atau tidak
    3. jika tidak, kembali ke struk dan pembayaran, berulang sampai bayar, lalu mampilkan kembalian setelah pembayaran
    4. opsi pembayaran tunai dan non
    5. lakukan do while untuk kembali ke awal lagi.*/
    return 0;
}
