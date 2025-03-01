import java.util.LinkedList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        LinkedList<PetShop> listPetshop = new LinkedList<>();
        Main mainInstance = new Main();

        PetShop p1 = new PetShop();
        p1.setId("001");
        p1.setNamaProduk("Kalung_Kucing");
        p1.setHargaProduk(25000);
        p1.setStokProduk(15);
        p1.setJenis("Kalung");
        p1.setBahan("Nylon");
        p1.setWarna("Merah");
        p1.setUntuk("Kucing");
        p1.setSize("S");
        p1.setMerk("PawClub");
        listPetshop.add(p1);

        PetShop p2 = new PetShop();
        p2.setId("002");
        p2.setNamaProduk("Sweater_Anjing");
        p2.setHargaProduk(75000);
        p2.setStokProduk(10);
        p2.setJenis("Pakaian");
        p2.setBahan("Wol");
        p2.setWarna("Biru");
        p2.setUntuk("Anjing");
        p2.setSize("M");
        p2.setMerk("DogStyle");
        listPetshop.add(p2);

        PetShop p3 = new PetShop();
        p3.setId("003");
        p3.setNamaProduk("Topi_Kucing");
        p3.setHargaProduk(35000);
        p3.setStokProduk(8);
        p3.setJenis("Topi");
        p3.setBahan("Kain");
        p3.setWarna("Kuning");
        p3.setUntuk("Kucing");
        p3.setSize("S");
        p3.setMerk("CatCap");
        listPetshop.add(p3);

        PetShop p4 = new PetShop();
        p4.setId("004");
        p4.setNamaProduk("Jaket_Hujan_Anjing");
        p4.setHargaProduk(120000);
        p4.setStokProduk(7);
        p4.setJenis("Jas_Hujan");
        p4.setBahan("Waterproof");
        p4.setWarna("Hijau");
        p4.setUntuk("Anjing");
        p4.setSize("L");
        p4.setMerk("RainDog");
        listPetshop.add(p4);

        PetShop p5 = new PetShop();
        p5.setId("005");
        p5.setNamaProduk("Bandana_Kucing");
        p5.setHargaProduk(20000);
        p5.setStokProduk(20);
        p5.setJenis("Bandana");
        p5.setBahan("Katun");
        p5.setWarna("Ungu");
        p5.setUntuk("Kucing");
        p5.setSize("XS");
        p5.setMerk("StyleCat");
        listPetshop.add(p5);

        System.out.println("Data Produk Awal:");
        mainInstance.displayTable(listPetshop);

        Scanner sc = new Scanner(System.in);
        System.out.print("\nMasukkan jumlah produk baru: ");
        int n = sc.nextInt();
        sc.nextLine(); 

        System.out.println("\nMasukkan data produk baru:");
        for (int i = 0; i < n; i++) {
            String inputLine = sc.nextLine();
            String[] data = inputLine.split(" ");

            if (data.length < 10) {
                System.out.println("Input tidak valid! Pastikan semua data diisi.");
                i--; 
                continue;
            }

            String id = data[0];
            String namaProduk = data[1];
            int harga = Integer.parseInt(data[2]);
            int stok = Integer.parseInt(data[3]);
            String jenis = data[4];
            String bahan = data[5];
            String warna = data[6];
            String untuk = data[7];
            String size = data[8];
            String merk = data[9];


            PetShop produkBaru = new PetShop();
            produkBaru.setId(id);
            produkBaru.setNamaProduk(namaProduk);
            produkBaru.setHargaProduk(harga);
            produkBaru.setStokProduk(stok);
            produkBaru.setJenis(jenis);
            produkBaru.setBahan(bahan);
            produkBaru.setWarna(warna);
            produkBaru.setUntuk(untuk);
            produkBaru.setSize(size);
            produkBaru.setMerk(merk);

            listPetshop.add(produkBaru);
        }

        System.out.println("\nData Semua Produk:");
        mainInstance.displayTable(listPetshop);
    }

    public void displayTable(LinkedList<PetShop> listPetshop) {
        int[] maxLengths = findMaxLengths(listPetshop);
        int totalLength = maxLengths[10] + 31;

        printLine(totalLength);
        System.out.printf("| %-" + maxLengths[0] + "s | %-" + maxLengths[1] + "s | %-" + maxLengths[2] + "s | %-" + maxLengths[3] + "s | %-" + maxLengths[4] + "s | %-" + maxLengths[5] + "s | %-" + maxLengths[6] + "s | %-" + maxLengths[7] + "s | %-" + maxLengths[8] + "s | %-" + maxLengths[9] + "s |\n",
                "ID", "Nama Produk", "Harga", "Stok", "Jenis", "Bahan", "Warna", "Untuk", "Size", "Merk");
        printLine(totalLength);

        for (PetShop item : listPetshop) {
            System.out.printf("| %-" + maxLengths[0] + "s | %-" + maxLengths[1] + "s | %-" + maxLengths[2] + "d | %-" + maxLengths[3] + "d | %-" + maxLengths[4] + "s | %-" + maxLengths[5] + "s | %-" + maxLengths[6] + "s | %-" + maxLengths[7] + "s | %-" + maxLengths[8] + "s | %-" + maxLengths[9] + "s |\n",
                    item.getId(), item.getNamaProduk(), item.getHargaProduk(), item.getStokProduk(), item.getJenis(), item.getBahan(), item.getWarna(), item.getUntuk(), item.getSize(), item.getMerk());
        }

        printLine(totalLength);
    }

    private int[] findMaxLengths(LinkedList<PetShop> listPetshop) {
        int[] maxLengths = {2, 11, 5, 4, 5, 5, 5, 5, 4, 4, 0};

        for (PetShop item : listPetshop) {
            maxLengths[0] = Math.max(maxLengths[0], item.getId().length());
            maxLengths[1] = Math.max(maxLengths[1], item.getNamaProduk().length());
            maxLengths[2] = Math.max(maxLengths[2], String.valueOf(item.getHargaProduk()).length());
            maxLengths[3] = Math.max(maxLengths[3], String.valueOf(item.getStokProduk()).length());
            maxLengths[4] = Math.max(maxLengths[4], item.getJenis().length());
            maxLengths[5] = Math.max(maxLengths[5], item.getBahan().length());
            maxLengths[6] = Math.max(maxLengths[6], item.getWarna().length());
            maxLengths[7] = Math.max(maxLengths[7], item.getUntuk().length());
            maxLengths[8] = Math.max(maxLengths[8], item.getSize().length());
            maxLengths[9] = Math.max(maxLengths[9], item.getMerk().length());
        }

        maxLengths[10] = maxLengths[0] + maxLengths[1] + maxLengths[2] + maxLengths[3] + maxLengths[4] + maxLengths[5] + maxLengths[6] + maxLengths[7] + maxLengths[8] + maxLengths[9];
        return maxLengths;
    }

    private void printLine(int length) {
        for (int i = 0; i < length; i++) {
            System.out.print("-");
        }
        System.out.println();
    }
}