    # Saya Safira Aliyah Azmi dengan NIM 2309209 mengerjakan TP 2 
    # dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    # maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
from PetShop import PetShop

def display_table(list_petshop):
    longest_data = [2, 11, 5, 4, 5, 5, 5, 5, 4, 4]

    for item in list_petshop:
        longest_data[0] = max(longest_data[0], len(item.get_id()))
        longest_data[1] = max(longest_data[1], len(item.get_nama_produk()))
        longest_data[2] = max(longest_data[2], len(str(item.get_harga_produk())))
        longest_data[3] = max(longest_data[3], len(str(item.get_stok_produk())))
        longest_data[4] = max(longest_data[4], len(item.get_jenis()))
        longest_data[5] = max(longest_data[5], len(item.get_bahan()))
        longest_data[6] = max(longest_data[6], len(item.get_warna()))
        longest_data[7] = max(longest_data[7], len(item.get_untuk()))
        longest_data[8] = max(longest_data[8], len(item.get_size()))
        longest_data[9] = max(longest_data[9], len(item.get_merk()))

    total = sum(longest_data) + 31

    print('-' * total)

    headers = ["ID", "Nama Produk", "Harga", "Stok", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk"]
    header_line = "|"
    for i in range(len(headers)):
        header_line += f" {headers[i]}"
        header_line += ' ' * (longest_data[i] - len(headers[i]) + 1) + "|"
    print(header_line)

    print('-' * total)

    for item in list_petshop:
        row = "|"
        row += f" {item.get_id()}" + ' ' * (longest_data[0] - len(item.get_id()) + 1) + "|"
        row += f" {item.get_nama_produk()}" + ' ' * (longest_data[1] - len(item.get_nama_produk()) + 1) + "|"
        row += f" {item.get_harga_produk()}" + ' ' * (longest_data[2] - len(str(item.get_harga_produk())) + 1) + "|"
        row += f" {item.get_stok_produk()}" + ' ' * (longest_data[3] - len(str(item.get_stok_produk())) + 1) + "|"
        row += f" {item.get_jenis()}" + ' ' * (longest_data[4] - len(item.get_jenis()) + 1) + "|"
        row += f" {item.get_bahan()}" + ' ' * (longest_data[5] - len(item.get_bahan()) + 1) + "|"
        row += f" {item.get_warna()}" + ' ' * (longest_data[6] - len(item.get_warna()) + 1) + "|"
        row += f" {item.get_untuk()}" + ' ' * (longest_data[7] - len(item.get_untuk()) + 1) + "|"
        row += f" {item.get_size()}" + ' ' * (longest_data[8] - len(item.get_size()) + 1) + "|"
        row += f" {item.get_merk()}" + ' ' * (longest_data[9] - len(item.get_merk()) + 1) + "|"
        print(row)

    print('-' * total)

def main():
    list_petshop = []

    p1 = PetShop()
    p1.set_id("001")
    p1.set_nama_produk("Kalung_Kucing")
    p1.set_harga_produk(25000)
    p1.set_stok_produk(15)
    p1.set_jenis("Kalung")
    p1.set_bahan("Nylon")
    p1.set_warna("Merah")
    p1.set_untuk("Kucing")
    p1.set_size("S")
    p1.set_merk("PawClub")
    list_petshop.append(p1)

    p2 = PetShop()
    p2.set_id("002")
    p2.set_nama_produk("Sweater_Anjing")
    p2.set_harga_produk(75000)
    p2.set_stok_produk(10)
    p2.set_jenis("Pakaian")
    p2.set_bahan("Wol")
    p2.set_warna("Biru")
    p2.set_untuk("Anjing")
    p2.set_size("M")
    p2.set_merk("DogStyle")
    list_petshop.append(p2)

    p3 = PetShop()
    p3.set_id("003")
    p3.set_nama_produk("Topi_Kucing")
    p3.set_harga_produk(35000)
    p3.set_stok_produk(8)
    p3.set_jenis("Topi")
    p3.set_bahan("Kain")
    p3.set_warna("Kuning")
    p3.set_untuk("Kucing")
    p3.set_size("S")
    p3.set_merk("CatCap")
    list_petshop.append(p3)

    p4 = PetShop()
    p4.set_id("004")
    p4.set_nama_produk("Jaket_Hujan_Anjing")
    p4.set_harga_produk(120000)
    p4.set_stok_produk(7)
    p4.set_jenis("Jas_Hujan")
    p4.set_bahan("Waterproof")
    p4.set_warna("Hijau")
    p4.set_untuk("Anjing")
    p4.set_size("L")
    p4.set_merk("RainDog")
    list_petshop.append(p4)

    p5 = PetShop()
    p5.set_id("005")
    p5.set_nama_produk("Bandana_Kucing")
    p5.set_harga_produk(20000)
    p5.set_stok_produk(20)
    p5.set_jenis("Bandana")
    p5.set_bahan("Katun")
    p5.set_warna("Ungu")
    p5.set_untuk("Kucing")
    p5.set_size("XS")
    p5.set_merk("StyleCat")
    list_petshop.append(p5)

    print("Data Produk Awal:")
    display_table(list_petshop)

    n = int(input("Masukkan jumlah produk baru: "))
    print("\nMasukkan data produk baru:")

    for _ in range(n):
        input_line = input().split()
        id = input_line[0]
        nama_produk = input_line[1]
        harga_produk = int(input_line[2])
        stok_produk = int(input_line[3])
        jenis = input_line[4]
        bahan = input_line[5]
        warna = input_line[6]
        untuk = input_line[7]
        size = input_line[8]
        merk = input_line[9]

        produk_baru = PetShop()
        produk_baru.set_id(id)
        produk_baru.set_nama_produk(nama_produk)
        produk_baru.set_harga_produk(harga_produk)
        produk_baru.set_stok_produk(stok_produk)
        produk_baru.set_jenis(jenis)
        produk_baru.set_bahan(bahan)
        produk_baru.set_warna(warna)
        produk_baru.set_untuk(untuk)
        produk_baru.set_size(size)
        produk_baru.set_merk(merk)

        list_petshop.append(produk_baru)

    print("\nData Semua Produk:")
    display_table(list_petshop)

if __name__ == "__main__":
    main()