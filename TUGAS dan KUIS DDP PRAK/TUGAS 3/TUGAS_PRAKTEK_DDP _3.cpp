#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char negara1[200];
    string negara2;
    long korban1, korban2;
    float pesawat1, kapal1, rudal1, peluru1;
    float pesawat2, kapal2, rudal2, peluru2;
    int pilih_blok1;

    cout << setfill('=') << setw(120) << "\n";
    cout << setfill(' ') << setw(67) << " PERANG DUNIA KE 2\t\t" << endl;
    cout << setfill('=') << setw(120) << "\n";

    cout << setfill('-') << setw(120) << "\n";
    cout << setfill(' ') << setw(64) << " PILIH BLOK NEGARA 1 \t\t" << endl;
    cout << setfill('-') << setw(120) << "\n";

    cout << " ==PILIH BLOK 1==" << std::endl;

    cout << "1. BLOK POROS " << endl;
    cout << "2. BLOK SEKUTU " << endl;
    cout << "PILIH 1 atau 2 = ";
    cin >> pilih_blok1;

    if (pilih_blok1 == 1)
    {
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(67) << " ANDA MEMILIH BLOK POROS \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";
        cout << " -NEGARA DI BLOK POROS " << std::endl;
        cout << " 1. JERMAN " << endl;
        cout << " 2. ITALIA " << endl;
        cout << " 3. JEPANG " << endl;
    }
    else
    {
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(67) << " ANDA MEMILIH BLOK SEKUTU \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";
        cout << " -NEGARA DI BLOK SEKUTU " << std::endl;
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
        cout << setfill(' ') << setw(67) << " ANDA MEMILIH NEGARA JERMAN \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";

        break;
    case 2:
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(67) << " ANDA MEMILIH NEGARA ITALIA \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";

        break;
    case 3:
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(67) << " ANDA MEMILIH BLOK JEPANG \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";
        break;
    case 4:
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(67) << " ANDA MEMILIH BLOK INGGRIS \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";
        break;
    case 5:
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(67) << " ANDA MEMILIH BLOK AMERIKA \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";
        break;
    case 6:
        cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(67) << " ANDA MEMILIH BLOK UNI SOVIET \t\t" << endl;
        cout << setfill('-') << setw(120) << "\n";
        break;
    }

   
    cout << "Jumlah Korban \t\t\t:";
    cin >> korban1;
    cout << "Jumlah Pesawat \t\t\t:";
    cin >> pesawat1;
    cout << "Jumlah Kapal \t\t\t:";
    cin >> kapal1;
    cout << "Jumlah Rudal \t\t\t:";
    cin >> rudal1;
    cout << "Jumlah Peluru \t\t\t:";
    cin >> peluru1;

    cout << setfill('-') << setw(120) << "\n";
    cout << setfill(' ') << setw(64) << " NEGARA 2 \t\t" << endl;
    cout << setfill('-') << setw(120) << "\n";
    // Kedua


    cout << "Jumlah Korban   \t\t:";
    cin >> korban2;
    cin.ignore();
    cout << "Jumlah Pesawat \t\t\t:";
    cin >> pesawat2;
    cout << "Jumlah Kapal \t\t\t:";
    cin >> kapal2;
    cout << "Jumlah Rudal \t\t\t:";
    cin >> rudal2;
    cout << "Jumlah Peluru \t\t\t:";
    cin >> peluru2;

    cout << setfill('=') << setw(120) << "\n";
    cout << setfill(' ') << setw(60) << "DATA STATISTIK KEMATIAN KORBAN DAN INVENTARIS PADA PERANG DUNIA KE 2\t\t" << endl;
    cout << setfill('=') << setw(120) << "\n";

    float Korban_Total = korban1 + korban2;
    float Total_Amunisi_Rudal = rudal1 + rudal2;
    float Total_Amunisi_Peluru = peluru1 + peluru2;
    float Total_Kendaraan_Perang = pesawat1 + pesawat2 + kapal1 + kapal2;

    cout << "Nama Negara\t\t\t:" << negara1 << "+" << negara2 << endl;
    cout << "Korban Total\t\t\t:" << Korban_Total << endl;
    cout << "Total Amunisi Rudal\t\t:" << Total_Amunisi_Rudal << endl;
    cout << "Total Amunisi Peluru\t\t:" << Total_Amunisi_Peluru << endl;
    cout << "Total Kendaraan Perang\t\t:" << Total_Kendaraan_Perang << endl;

    return 0;
}
