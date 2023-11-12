#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int jenisT;
    int jumlaT;
    int umur;
    int pembayaran;
    char email[120];
    char nama[120];
    int hargavip = 500000;
    int hargagold = 400000;
    int hargasilver = 350000;

    cout << setfill(' ') << setw(70) << "PENJUALAN TIKET KONSER" << endl;
    cout << "NO";
    cout << "  |";
    cout << " JENIS";
    cout << "  |";
    cout << " HARGA" << endl;
    cout << setfill(' ') << setw(1) << "1";
    cout << setfill(' ') << setw(9) << "VIP";
    cout << setfill(' ') << setw(11) << "500.000" << endl;
    cout << setfill('-') << setw(30) << "\n";
    cout << setfill(' ') << setw(1) << "2";
    cout << setfill(' ') << setw(10) << "GOLD";
    cout << setfill(' ') << setw(10) << "400.000" << endl;
    cout << setfill('-') << setw(30) << "\n";
    cout << setfill(' ') << setw(1) << "3";
    cout << setfill(' ') << setw(11) << "SILVER";
    cout << setfill(' ') << setw(9) << "350.000" << endl;
    cout << setfill('-') << setw(30) << "\n";
    cout << "MASUKKAN JENIS TIKET YANG AKAN DIBELI : ";
    cin >> jenisT;

    if (jenisT < 4)
    {
        if (jenisT == 1)
        {
            cout << "ANDA MEMILIH TIKET VIP" << endl;
        }
        else if (jenisT == 2)
        {
            cout << "ANDA MEMILIH TIKET GOLD" << endl;
        }
        else if (jenisT == 3)
        {
            cout << "ANDA MEMILIH TIKET SILVER" << endl;
        }
        else if (jenisT >= 4)
        {
            cout << "MAAF PILIHAN TIDAK ADA" << endl;
        }

        cout << "MASUKKAN JUMLAH TIKET     :  ";
        cin >> jumlaT;

        for (int i = 0; i < jumlaT; i++)
        {
            cout << "TIKET"
                 << " " << i + 1 << endl;
            cout << "NAMA : ";
            cin >> nama;
            cout << "UMUR :";
            cin >> umur;
            if (umur < 12)
            {
                cout << "MAAF UMUR DIBAWAH 12" << endl;
            }
            else
            {
                cout << "EMAIL :";
                cin >> email;
            }
        }

        cout << setfill(' ') << setw(60) << "BAYAR DULU DEK" << endl;
        if (jenisT == 1)
        {
            cout << "DETAIL : " << jumlaT << " VIP" << endl;
        }
        else if (jenisT == 2)
        {
            cout << "DETAIL : " << jumlaT << " GOLD" << endl;
        }
        else if (jenisT == 3)
        {
            cout << "DETAIL : " << jumlaT << " SILVER" << endl;
        }

        for (int i = 0; i < jumlaT; i++)
        {
            cout << "TIKET" << " " << i + 1 << endl;
            cout << "Nama : " << nama [i] << endl;
            cout << "Umur : " << umur << endl;
            cout << "Email : " << email << endl;
        }

        if (jenisT == 1)
        {
            cout << "TOTAL HARGA : " << hargavip * jumlaT << endl;
            cout << "UANG PEMBAYARAN : ";
            cin >> pembayaran;
            if (pembayaran > (hargavip * jumlaT))
            {
                cout << "UANG KEMBALIAN : " << pembayaran - (hargavip * jumlaT) << endl;
            }
            else
            {
                cout << "UANG KAMU KURANG : " << pembayaran - (hargavip * jumlaT) << endl;
            }
        }
        else if (jenisT == 2)
        {
            cout << "TOTAL HARGA : " << hargagold * jumlaT << endl;
            cout << "UANG PEMBAYARAN : ";
            cin >> pembayaran;
            if (pembayaran > (hargagold * jumlaT))
            {
                cout << "UANG KEMBALIAN : " << pembayaran - (hargagold * jumlaT) << endl;
            }
            else
            {
                cout << "UANG KAMU KURANG : " << pembayaran - (hargagold * jumlaT) << endl;
            }
        }
        else if (jenisT == 3)
        {
            cout << "TOTAL HARGA : " << hargasilver * jumlaT << endl;
            cout << "UANG PEMBAYARAN : ";
            cin >> pembayaran;
            if (pembayaran > (hargasilver * jumlaT))
            {
                cout << "UANG KEMBALIAN : " << pembayaran - (hargasilver * jumlaT) << endl;
            }
            else
            {
                cout << "UANG KAMU KURANG : " << pembayaran - (hargasilver * jumlaT) << endl;
            }
        }
    }
    else
    {
        cout << "GAADA PILIHAN" << endl;
    }

    return 0;
}
