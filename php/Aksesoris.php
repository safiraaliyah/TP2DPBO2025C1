<?php

require_once('Baju.php'); 

class Aksesoris extends Baju {
    // attributes
    private $jenis = "";
    private $bahan = "";
    private $warna = "";

    // constructor
    public function __construct($jenis = "", $bahan = "", $warna = "") {
        parent::__construct();
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }

    // getter dan setter
    public function get_jenis() {
        return $this->jenis;
    }

    public function set_jenis($jenis) {
        $this->jenis = $jenis;
    }

    public function get_bahan() {
        return $this->bahan;
    }

    public function set_bahan($bahan) {
        $this->bahan = $bahan;
    }

    public function get_warna() {
        return $this->warna;
    }

    public function set_warna($warna) {
        $this->warna = $warna;
    }
}

?>