/* 
    Saya Safira Aliyah Azmi dengan NIM 2309209 mengerjakan TP 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

#include <bits/stdc++.h>
#include "PetShop.cpp"

using namespace std;

void displayTable(list<PetShop>& list_petshop) {
    vector<int> longestData = {2, 11, 5, 4, 5, 5, 5, 5, 4, 4};
    
    for (auto it = list_petshop.begin(); it != list_petshop.end(); it++) {
        if (longestData[0] < it->get_id().length()) longestData[0] = it->get_id().length();
        if (longestData[1] < it->get_nama_produk().length()) longestData[1] = it->get_nama_produk().length();
        string hargaString = to_string(it->get_harga_produk());
        if (longestData[2] < hargaString.length()) longestData[2] = hargaString.length();
        string stokString = to_string(it->get_stok_produk());
        if (longestData[3] < stokString.length()) longestData[3] = stokString.length();
        if (longestData[4] < it->get_jenis().length()) longestData[4] = it->get_jenis().length();
        if (longestData[5] < it->get_bahan().length()) longestData[5] = it->get_bahan().length();
        if (longestData[6] < it->get_warna().length()) longestData[6] = it->get_warna().length();
        if (longestData[7] < it->get_untuk().length()) longestData[7] = it->get_untuk().length();
        if (longestData[8] < it->get_size().length()) longestData[8] = it->get_size().length();
        if (longestData[9] < it->get_merk().length()) longestData[9] = it->get_merk().length();
    }

    int sum = 10;
    for (int i = 0; i < 10; i++) {
        sum += longestData[i];
    }

    for (int space = 0; space < sum + 21; space++) {
        cout << '-';
    }
    cout << endl;

    cout << "| ID";
    for (int space = 0; space < longestData[0] - 1; space++) {
        cout << ' ';
    }
    cout << "| Nama Produk";
    for (int space = 0; space < longestData[1] - 10; space++) {
        cout << ' ';
    }
    cout << "| Harga";
    for (int space = 0; space < longestData[2] - 4; space++) {
        cout << ' ';
    }
    cout << "| Stok";
    for (int space = 0; space < longestData[3] - 3; space++) {
        cout << ' ';
    }
    cout << "| Jenis";
    for (int space = 0; space < longestData[4] - 4; space++) {
        cout << ' ';
    }
    cout << "| Bahan";
    for (int space = 0; space < longestData[5] - 4; space++) {
        cout << ' ';
    }
    cout << "| Warna";
    for (int space = 0; space < longestData[6] - 4; space++) {
        cout << ' ';
    }
    cout << "| Untuk";
    for (int space = 0; space < longestData[7] - 4; space++) {
        cout << ' ';
    }
    cout << "| Size";
    for (int space = 0; space < longestData[8] - 3; space++) {
        cout << ' ';
    }
    cout << "| Merk";
    for (int space = 0; space < longestData[9] - 3; space++) {
        cout << ' ';
    }
    cout << "|" << endl;

    for (int space = 0; space < sum + 21; space++) {
        cout << '-';
    }
    cout << endl;

    for (auto it = list_petshop.begin(); it != list_petshop.end(); it++) {
        cout << "| " << it->get_id();
        for (int space = 0; space < 1 + longestData[0] - it->get_id().length(); space++) {
            cout << ' ';
        }
        cout << "| " << it->get_nama_produk();
        for (int space = 0; space < 1 + longestData[1] - it->get_nama_produk().length(); space++) {
            cout << ' ';
        }
        cout << "| " << it->get_harga_produk();
        string hargaString = to_string(it->get_harga_produk());
        for (int space = 0; space < 1 + longestData[2] - hargaString.length(); space++) {
            cout << ' ';
        }
        cout << "| " << it->get_stok_produk();
        string stokString = to_string(it->get_stok_produk());
        for (int space = 0; space < 1 + longestData[3] - stokString.length(); space++) {
            cout << ' ';
        }
        cout << "| " << it->get_jenis();
        for (int space = 0; space < 1 + longestData[4] - it->get_jenis().length(); space++) {
            cout << ' ';
        }
        cout << "| " << it->get_bahan();
        for (int space = 0; space < 1 + longestData[5] - it->get_bahan().length(); space++) {
            cout << ' ';
        }
        cout << "| " << it->get_warna();
        for (int space = 0; space < 1 + longestData[6] - it->get_warna().length(); space++) {
            cout << ' ';
        }
        cout << "| " << it->get_untuk();
        for (int space = 0; space < 1 + longestData[7] - it->get_untuk().length(); space++) {
            cout << ' ';
        }
        cout << "| " << it->get_size();
        for (int space = 0; space < 1 + longestData[8] - it->get_size().length(); space++) {
            cout << ' ';
        }
        cout << "| " << it->get_merk();
        for (int space = 0; space < 1 + longestData[9] - it->get_merk().length(); space++) {
            cout << ' ';
        }
        cout << "|" << endl;
    }

    for (int space = 0; space < sum + 21; space++) {
        cout << '-';
    }
    cout << endl;
}
int main()
{
    
    list<PetShop> list_petshop;
   
    PetShop p1;
    p1.set_id("001");
    p1.set_nama_produk("Kalung_Kucing");
    p1.set_harga_produk(25000);
    p1.set_stok_produk(15);
    p1.set_jenis("Kalung");
    p1.set_bahan("Nylon");
    p1.set_warna("Merah");
    p1.set_untuk("Kucing");
    p1.set_size("S");
    p1.set_merk("PawClub");
    list_petshop.push_back(p1);
    
    PetShop p2;
    p2.set_id("002");
    p2.set_nama_produk("Sweater_Anjing");
    p2.set_harga_produk(75000);
    p2.set_stok_produk(10);
    p2.set_jenis("Pakaian");
    p2.set_bahan("Wol");
    p2.set_warna("Biru");
    p2.set_untuk("Anjing");
    p2.set_size("M");
    p2.set_merk("DogStyle");
    list_petshop.push_back(p2);
    
    PetShop p3;
    p3.set_id("003");
    p3.set_nama_produk("Topi_Kucing");
    p3.set_harga_produk(35000);
    p3.set_stok_produk(8);
    p3.set_jenis("Topi");
    p3.set_bahan("Kain");
    p3.set_warna("Kuning");
    p3.set_untuk("Kucing");
    p3.set_size("S");
    p3.set_merk("CatCap");
    list_petshop.push_back(p3);
    
    PetShop p4;
    p4.set_id("004");
    p4.set_nama_produk("Jaket_Hujan_Anjing");
    p4.set_harga_produk(120000);
    p4.set_stok_produk(7);
    p4.set_jenis("Jas_Hujan");
    p4.set_bahan("Waterproof");
    p4.set_warna("Hijau");
    p4.set_untuk("Anjing");
    p4.set_size("L");
    p4.set_merk("RainDog");
    list_petshop.push_back(p4);
    
    PetShop p5;
    p5.set_id("005");
    p5.set_nama_produk("Bandana_Kucing");
    p5.set_harga_produk(20000);
    p5.set_stok_produk(20);
    p5.set_jenis("Bandana");
    p5.set_bahan("Katun");
    p5.set_warna("Ungu");
    p5.set_untuk("Kucing");
    p5.set_size("XS");
    p5.set_merk("StyleCat");
    list_petshop.push_back(p5);
    
    cout << "Data Produk Awal:" << endl;
    displayTable(list_petshop);
    
    int n;
    cout << "Masukkan jumlah produk baru: ";
    cin >> n;
    cin.ignore();
    
    cout << "\nMasukkan data produk baru:" << endl;
    
    for(int i = 0; i < n; i++) {
        string input_line;
        getline(cin, input_line);
        
        stringstream ss(input_line);
        string id, nama_produk, jenis, bahan, warna, untuk, size, merk;
        int harga_produk, stok_produk
        
        ss >> id >> nama_produk >> harga_produk >> stok_produk >> jenis >> bahan >> warna >> untuk >> size >> merk;
        
        PetShop produk_baru;
        produk_baru.set_id(id);
        produk_baru.set_nama_produk(nama_produk);
        produk_baru.set_harga_produk(harga_produk);
        produk_baru.set_stok_produk(stok_produk);
        produk_baru.set_jenis(jenis);
        produk_baru.set_bahan(bahan);
        produk_baru.set_warna(warna);
        produk_baru.set_untuk(untuk);
        produk_baru.set_size(size);
        produk_baru.set_merk(merk);
        
        list_petshop.push_back(produk_baru);
    }
    
    cout << "\nData Semua Produk:" << endl;
    displayTable(list_petshop);
    
    return 0;
}