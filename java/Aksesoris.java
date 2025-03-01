public class Aksesoris extends Baju {
    private String jenis, bahan, warna;

    public Aksesoris() {
        this.jenis = "";
        this.bahan = "";
        this.warna = "";
    }

    public Aksesoris(String jenis, String bahan, String warna) {
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    public String getJenis() {
        return jenis;
    }

    public void setJenis(String jenis) {
        this.jenis = jenis;
    }

    public String getBahan() {
        return bahan;
    }

    public void setBahan(String bahan) {
        this.bahan = bahan;
    }

    public String getWarna() {
        return warna;
    }

    public void setWarna(String warna) {
        this.warna = warna;
    }
}