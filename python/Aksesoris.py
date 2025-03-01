    # Saya Safira Aliyah Azmi dengan NIM 2309209 mengerjakan TP 2 
    # dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    # maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.


from Baju import Baju

class Aksesoris(Baju):
    def __init__(self, jenis="", bahan="", warna=""):
        super().__init__()
        self.__jenis = jenis
        self.__bahan = bahan
        self.__warna = warna

    def get_jenis(self):
        return self.__jenis

    def set_jenis(self, jenis):
        self.__jenis = jenis

    def get_bahan(self):
        return self.__bahan

    def set_bahan(self, bahan):
        self.__bahan = bahan

    def get_warna(self):
        return self.__warna

    def set_warna(self, warna):
        self.__warna = warna