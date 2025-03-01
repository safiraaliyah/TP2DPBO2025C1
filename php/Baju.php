<?php

class Baju {
    // attributes
    private $untuk = "";
    private $size = "";
    private $merk = "";

    // constructor
    public function __construct($untuk = "", $size = "", $merk = "") {
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
    }

    // getter dan setter
    public function get_untuk() {
        return $this->untuk;
    }

    public function set_untuk($untuk) {
        $this->untuk = $untuk;
    }

    public function get_size() {
        return $this->size;
    }

    public function set_size($size) {
        $this->size = $size;
    }

    public function get_merk() {
        return $this->merk;
    }

    public function set_merk($merk) {
        $this->merk = $merk;
    }
}

?>