public class Baju {
    private String untuk, size, merk;

    public Baju() {
        this.untuk = "";
        this.size = "";
        this.merk = "";
    }

    public Baju(String untuk, String size, String merk) {
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

    public String getUntuk() {
        return untuk;
    }

    public void setUntuk(String untuk) {
        this.untuk = untuk;
    }

    public String getSize() {
        return size;
    }

    public void setSize(String size) {
        this.size = size;
    }

    public String getMerk() {
        return merk;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }
}