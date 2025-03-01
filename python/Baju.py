    # Saya Safira Aliyah Azmi dengan NIM 2309209 mengerjakan TP 2 
    # dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    # maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.

class Baju:
    def __init__(self, untuk="", size="", merk=""):
        self.__untuk = untuk
        self.__size = size
        self.__merk = merk

    def get_untuk(self):
        return self.__untuk

    def set_untuk(self, untuk):
        self.__untuk = untuk

    def get_size(self):
        return self.__size

    def set_size(self, size):
        self.__size = size

    def get_merk(self):
        return self.__merk

    def set_merk(self, merk):
        self.__merk = merk