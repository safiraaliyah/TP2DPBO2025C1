    # Saya Safira Aliyah Azmi dengan NIM 2309209 mengerjakan TP 2 
    # dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    # maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
from Aksesoris import Aksesoris

class PetShop(Aksesoris):
    def __init__(self, id="", nama_produk="", harga_produk=0, stok_produk=0):
        super().__init__()
        self.__id = id
        self.__nama_produk = nama_produk
        self.__harga_produk = harga_produk
        self.__stok_produk = stok_produk

    def get_id(self):
        return self.__id

    def set_id(self, id):
        self.__id = id

    def get_nama_produk(self):
        return self.__nama_produk

    def set_nama_produk(self, nama_produk):
        self.__nama_produk = nama_produk

    def get_harga_produk(self):
        return self.__harga_produk

    def set_harga_produk(self, harga_produk):
        self.__harga_produk = harga_produk

    def get_stok_produk(self):
        return self.__stok_produk

    def set_stok_produk(self, stok_produk):
        self.__stok_produk = stok_produk