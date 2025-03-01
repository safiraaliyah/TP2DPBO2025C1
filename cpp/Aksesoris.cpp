/* 
    Saya Safira Aliyah Azmi dengan NIM 2309209 mengerjakan TP 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/


#include <bits/stdc++.h>
#include "Baju.cpp"
using namespace std;

class Aksesoris : public Baju
{
    
    private:
        string jenis, bahan, warna;
    public:
        Aksesoris(){
        }
   
    Aksesoris(string jenis, string bahan, string warna){
        this->jenis = jenis;
        this->bahan = bahan;
        this->warna = warna;
    }
   
    string get_jenis(){
        return this->jenis;
    }
    void set_jenis(string jenis){
        this->jenis = jenis;
    }
    string get_bahan(){
        return this->bahan;
    }
    void set_bahan(string bahan){
        this->bahan = bahan;
    }
    string get_warna(){
        return this->warna;
    }
    void set_warna(string warna){
        this->warna = warna;
    }
    ~Aksesoris(){}; 
};