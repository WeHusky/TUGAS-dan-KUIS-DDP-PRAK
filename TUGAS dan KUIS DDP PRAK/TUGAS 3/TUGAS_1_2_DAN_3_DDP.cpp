#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    char namagw[120] = "Muhammad Sulthan Al Azzam";
    char nim[120] = "124230127";
    char kelas[120] = "Kelas Praktikum SI-D";
    char jenisK[120] = "L";
    char alamat[120] = "Jalan Raya Sunan Gunung Jati Wanakaya no 6";
    char email[120] = "tamcanum@gmail.com";
    char nohp[120] = "087882144114";

    cout << setfill('-') << setw(120) << "\n";
    cout << setfill(' ') << setw(70) << "REKAP TUGAS PRAKTIKUM DDP" << endl;
    cout << setfill('-') << setw(120) << "\n";

    cout << setfill('-') << setw(11) << "\n";
    cout << "|";
    cout << " TUGAS 1";
    cout << setfill(' ') << setw(2) << "|" << endl;
    cout << setfill('-') << setw(11) << "\n";

    cout << "Nama\t: " << namagw << endl;
    cout << "NIM\t: " << nim << endl;
    cout << "Kelas\t: " << kelas << endl;
    cout << "JenisK\t: " << jenisK << endl;
    cout << "Alamat\t: " << alamat << endl;
    cout << "Email\t: " << email << endl;
    cout << "Nohp\t: " << nohp << endl;

    string negara2;
    long korban1, korban2;
    long jumlah_pasukan1, jumlah_pasukan2;
    float pesawat1, kapal1, rudal1, peluru1;
    float pesawat2, kapal2, rudal2, peluru2;
    int pilih_blok1;

    cout << setfill('-') << setw(18) << "\n";
    cout << "|";
    cout << " TUGAS 2 dan 3";
    cout << setfill(' ') << setw(2) << "|" << endl;
    cout << setfill('-') << setw(18) << "\n";

    cout << setfill('=') << setw(120) << "\n";
    cout << setfill(' ') << setw(67) << " PERANG DUNIA KE 2\t\t" << endl;
    cout << setfill('=') << setw(120) << "\n";
    cout << setfill(' ') << setw(80) << " PILIH BLOK NEGARA UNTUK MELAWAN INDONESIA" << endl;

    cout << " ==PILIH BLOK==" << endl;

    cout << "1. BLOK POROS " << endl;
    cout << "2. BLOK SEKUTU " << endl;
    cout << "PILIH 1 atau 2 = ";
    cin >> pilih_blok1;

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
    else if (pilih_blok1==2)
    {
       cout << setfill('-') << setw(120) << "\n";
        cout << setfill(' ') << setw(70) << " ANDA MEMILIH BLOK SEKUTU " << endl;
        cout << setfill('-') << setw(120) << "\n";
        cout << " -NEGARA DI BLOK SEKUTU " << endl;
        cout << " 4. INGGRIS " << endl;
        cout << " 5. AMERIKA " << endl;
        cout << " 6. UNI SOVIET " << endl;
    }
    else
    {
       cout<<"GAADA PILIHAN ITU GOBLOK"<<endl; 
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
    cout << "MASUKKAN JUMLAH JENDRAL         :";
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
    cout << setfill(' ') << setw(100) << "DATA STATISTIK KEMATIAN KORBAN DAN INVENTARIS PADA PERANG DUNIA KE 2\t\t" << endl;
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

    /*cout << "Nama Negara\t\t\t:" << negara1 << "+" << negara2 << endl;*/
    cout << "Jumlah jendral\t\t\t:" << jendral << endl;
    cout << "Korban Pasukan\t\t\t:" << Total_pasukan << endl;
    cout << "Korban Total\t\t\t:" << Korban_Total << endl;
    cout << "Total Amunisi Rudal\t\t:" << Total_Amunisi_Rudal << endl;
    cout << "Total Amunisi Peluru\t\t:" << Total_Amunisi_Peluru << endl;
    cout << "Total Kendaraan Perang\t\t:" << Total_Kendaraan_Perang << endl;

    return 0;
}
