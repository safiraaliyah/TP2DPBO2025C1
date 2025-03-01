/* 
    Saya Safira Aliyah Azmi dengan NIM 2309209 mengerjakan TP 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

#include <bits/stdc++.h>
#include "Aksesoris.cpp"
using namespace std;

class PetShop : public Aksesoris {
    private:
        string id, nama_produk;
        int harga_produk, stok_produk;
    public:
        PetShop(){
        }   
    PetShop(string id, string nama_produk, int harga_produk, int stok_produk){
        this->id = id;
        this->nama_produk = nama_produk;
        this->harga_produk = harga_produk;
        this->stok_produk = stok_produk;
    } 
    string get_id(){
        return this->id;
    }
    void set_id(string id){
        this->id = id;
    }
    string get_nama_produk(){
        return this->nama_produk;
    }
    void set_nama_produk(string nama_produk){
        this->nama_produk = nama_produk;
    }
    int get_harga_produk(){
        return this->harga_produk;
    }
    void set_harga_produk(int harga_produk){
        this->harga_produk = harga_produk;
    }
    int get_stok_produk(){
        return this->stok_produk;
    }
    void set_stok_produk(int stok_produk){
        this->stok_produk = stok_produk;
    }
    ~PetShop(){};
};