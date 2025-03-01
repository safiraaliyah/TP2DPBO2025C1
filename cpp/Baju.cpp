/* 
    Saya Safira Aliyah Azmi dengan NIM 2309209 mengerjakan TP 2 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

#include <bits/stdc++.h>
using namespace std;

class Baju 
{
    private: 
        string untuk, size, merk;
    public:
        Baju(){
        }
    
    Baju(string untuk, string size, string merk){
        this->untuk = untuk;
        this->size = size;
        this->merk = merk;
    }
    
    string get_untuk(){
        return this->untuk;
    }
    void set_untuk(string untuk){
        this->untuk = untuk;
    }
    string get_size(){
        return this->size;
    }
    void set_size(string size){
        this->size = size;
    }
    string get_merk(){
        return this->merk;
    }
    void set_merk(string merk){
        this->merk = merk;
    }
    ~Baju(){}; 
};