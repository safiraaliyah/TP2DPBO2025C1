
## Janji
Saya **Safira Aliyah Azmi (NIM: 23092093)** mengerjakan *Tugas Praktikum 2* dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahannya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

---

## Penjelasan Atribut dan Methods

### 1. Class `Baju`
#### Atribut:
- `untuk`: Menyimpan informasi untuk siapa baju tersebut (misalnya, "Kucing" atau "Anjing").
- `size`: Menyimpan ukuran baju (misalnya, "S", "M", "L").
- `merk`: Menyimpan merk baju (misalnya, "PawClub", "DogStyle").

#### Methods:
- **C++**:
  ```cpp
  string get_untuk() { return this->untuk; }
  void set_untuk(string untuk) { this->untuk = untuk; }
  ```
- **Java**:
  ```java
  public String get_untuk() { return this.untuk; }
  public void set_untuk(String untuk) { this.untuk = untuk; }
  ```
- **Python**:
  ```python
  def get_untuk(self): return self.__untuk
  def set_untuk(self, untuk): self.__untuk = untuk
  ```
- **PHP**:
  ```php
  public function get_untuk() { return $this->untuk; }
  public function set_untuk($untuk) { $this->untuk = $untuk; }
  ```

---

### 2. Class `Aksesoris`
#### Atribut:
- `jenis`: Menyimpan jenis aksesoris (misalnya, "Kalung", "Topi").
- `bahan`: Menyimpan bahan aksesoris (misalnya, "Nylon", "Kain").
- `warna`: Menyimpan warna aksesoris (misalnya, "Merah", "Biru").

#### Methods:
- **C++**:
  ```cpp
  string get_jenis() { return this->jenis; }
  void set_jenis(string jenis) { this->jenis = jenis; }
  ```
- **Java**:
  ```java
  public String get_jenis() { return this.jenis; }
  public void set_jenis(String jenis) { this.jenis = jenis; }
  ```
- **Python**:
  ```python
  def get_jenis(self): return self.__jenis
  def set_jenis(self, jenis): self.__jenis = jenis
  ```
- **PHP**:
  ```php
  public function get_jenis() { return $this->jenis; }
  public function set_jenis($jenis) { $this->jenis = $jenis; }
  ```

---

### 3. Class `PetShop` 
#### Atribut:
- `id`: Menyimpan ID produk.
- `nama_produk`: Menyimpan nama produk.
- `harga_produk`: Menyimpan harga produk.
- `stok_produk`: Menyimpan stok produk.
- `foto_produk`: Menyimpan path atau nama file gambar produk.

#### Methods:
- **C++**:
  ```cpp
  string get_id() { return this->id; }
  void set_id(string id) { this->id = id; }
  ```
- **Java**:
  ```java
  public String get_id() { return this.id; }
  public void set_id(String id) { this.id = id; }
  ```
- **Python**:
  ```python
  def get_id(self): return self.__id
  def set_id(self, id): self.__id = id
  ```
- **PHP**:
  ```php
  public function get_id() { return $this->id; }
  public function set_id($id) { $this->id = $id; }
  ```

---

## Alur Program

### C++,Java,Python
1. **Inisialisasi Data Awal**
- Program memulai dengan menginisialisasi beberapa data produk awal.
- Data disimpan dalam list list_petshop.
  
2. **Menampilkan Data Awal**
- Data awal ditampilkan dalam bentuk tabel menggunakan fungsi displayTable().
- Fungsi ini menyesuaikan lebar kolom berdasarkan data terpanjang di setiap kolom.

3. **Input Data Baru**
- Pengguna diminta memasukkan jumlah produk baru yang ingin ditambahkan.
- Format input untuk setiap produk baru:

   ID Nama_Produk Harga Stok Jenis Bahan Warna Untuk Size Merk

- Data produk baru ditambahkan ke list list_petshop.

4. **Menampilkan Semua Data**
Setelah data baru dimasukkan, program menampilkan semua data produk (awal dan baru) dalam bentuk tabel.

5. **Fungsi displayTable()**
- Menampilkan data dalam tabel dengan lebar kolom yang disesuaikan.
- Atribut yang ditampilkan:
   ID
   Nama Produk
   Harga
   Stok
   Jenis
   Bahan
   Warna
   Untuk
   Size
   Merk

6. **Input dan Output**
- Program menggunakan cin dan cout untuk input dan output.
- Input diolah menggunakan stringstream untuk memisahkan data.

---

### PHP
1. **Inisialisasi Data Awal**
- Program memulai dengan menginisialisasi beberapa data produk awal.
- Data disimpan dalam array $list_petshop.

2. **Menampilkan Data dalam Tabel HTML**
- Data produk ditampilkan dalam bentuk tabel HTML.
- Tabel ini memiliki kolom untuk semua atribut produk, termasuk foto produk.
- Foto produk ditampilkan menggunakan tag <img>.

3. **Penggunaan Array**
- Data produk disimpan dalam array $list_petshop.
-Array menyimpan objek dari kelas PetShop.

4. **Integrasi dengan HTML**
- Program menggunakan PHP untuk meng-generate konten HTML secara dinamis.
- Data dari array $list_petshop di-loop dan ditampilkan dalam tabel HTML.
---


## Dokumentasi Output

1. **C++**:
   ![Image](https://github.com/user-attachments/assets/3ed528cb-b03e-4d75-9426-749333dd2b18)

2. **PYTHON**:
   ![Image](https://github.com/user-attachments/assets/96d8f317-9423-41c8-be87-1dee60f2ed3b)

3. **JAVA**:
   
4. **PHP**:
