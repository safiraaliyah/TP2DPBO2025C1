<?php
require_once('PetShop.php');

$list_petshop = array();

$p1 = new PetShop();
$p1->set_id("001");
$p1->set_nama_produk("Kalung_Kucing");
$p1->set_harga_produk(25000);
$p1->set_stok_produk(15);
$p1->set_jenis("Kalung");
$p1->set_bahan("Nylon");
$p1->set_warna("Merah");
$p1->set_untuk("Kucing");
$p1->set_size("S");
$p1->set_merk("PawClub");
$p1->set_foto_produk("images/kalung_kucing.jpg");
array_push($list_petshop, $p1);

$p2 = new PetShop();
$p2->set_id("002");
$p2->set_nama_produk("Sweater_Anjing");
$p2->set_harga_produk(75000);
$p2->set_stok_produk(10);
$p2->set_jenis("Pakaian");
$p2->set_bahan("Wol");
$p2->set_warna("Biru");
$p2->set_untuk("Anjing");
$p2->set_size("M");
$p2->set_merk("DogStyle");
$p2->set_foto_produk("images/sweater_anjing.jpg");
array_push($list_petshop, $p2);

$p3 = new PetShop();
$p3->set_id("003");
$p3->set_nama_produk("Topi_Kucing");
$p3->set_harga_produk(35000);
$p3->set_stok_produk(8);
$p3->set_jenis("Topi");
$p3->set_bahan("Kain");
$p3->set_warna("Kuning");
$p3->set_untuk("Kucing");
$p3->set_size("S");
$p3->set_merk("CatCap");
$p3->set_foto_produk("images/topi_kucing.jpg");
array_push($list_petshop, $p3);

$p4 = new PetShop();
$p4->set_id("004");
$p4->set_nama_produk("Jaket_Hujan_Anjing");
$p4->set_harga_produk(120000);
$p4->set_stok_produk(7);
$p4->set_jenis("Jas_Hujan");
$p4->set_bahan("Waterproof");
$p4->set_warna("Hijau");
$p4->set_untuk("Anjing");
$p4->set_size("L");
$p4->set_merk("RainDog");
$p4->set_foto_produk("images/jaket_hujan_anjing.jpg");
array_push($list_petshop, $p4);

$p5 = new PetShop();
$p5->set_id("005");
$p5->set_nama_produk("Bandana_Kucing");
$p5->set_harga_produk(20000);
$p5->set_stok_produk(20);
$p5->set_jenis("Bandana");
$p5->set_bahan("Katun");
$p5->set_warna("Ungu");
$p5->set_untuk("Kucing");
$p5->set_size("XS");
$p5->set_merk("StyleCat");
$p5->set_foto_produk("images/bandana_kucing.jpg");
array_push($list_petshop, $p5);

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PetShop milik Sapira</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.4/css/all.min.css">
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
            font-family: 'Arial', sans-serif;
        }
        
        body {
            background-color: #fff0f5; 
            color: #4a4a4a;
        }
        
       
        .navbar {
            background-color: #ff9dbc; 
            padding: 15px 20px;
            display: flex;
            justify-content: space-between;
            align-items: center;
            box-shadow: 0 2px 10px rgba(0, 0, 0, 0.1);
            position: sticky;
            top: 0;
            z-index: 100;
        }
        
        .navbar-brand {
            font-size: 24px;
            font-weight: bold;
            color: white;
            text-decoration: none;
            display: flex;
            align-items: center;
        }
        
        .navbar-brand i {
            margin-right: 10px;
            font-size: 28px;
        }
        
        .container {
            width: 90%;
            max-width: 1200px;
            margin: 20px auto;
            padding: 20px;
            background-color: white;
            border-radius: 10px;
            box-shadow: 0 0 15px rgba(0, 0, 0, 0.05);
        }
        
        h1 {
            color: #ff6b9d;
            text-align: center;
            margin-bottom: 20px;
            padding-bottom: 10px;
            border-bottom: 2px solid #ffcfe0;
        }
        
        table {
            border-collapse: collapse;
            width: 100%;
            margin-top: 20px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.03);
            border-radius: 8px;
            overflow: hidden;
        }
        
        th, td {
            border: 1px solid #ffcfe0;
            text-align: left;
            padding: 12px;
        }
        
        th {
            background-color: #ffcfe0; 
            color: #ff6b9d;
            font-weight: bold;
        }
        
        tr:nth-child(even) {
            background-color: #fff7f9; 
        }
        
        tr:hover {
            background-color: #ffebf2; 
        }
        
        img {
            max-width: 100px;
            height: auto;
            border-radius: 8px;
            transition: transform 0.3s ease;
        }
        
        img:hover {
            transform: scale(1.1);
        }
        
        /* Footer styling */
        footer {
            background-color: #ff9dbc;
            color: white;
            text-align: center;
            padding: 15px 0;
            margin-top: 30px;
            border-radius: 0 0 10px 10px;
        }
    </style>
</head>
<body>
    <!-- Navbar -->
    <div class="navbar">
        <a href="#" class="navbar-brand">
            <i class="fas fa-paw"></i>
            PetShopnya Sapiraa
        </a>
    </div>
    
    <div class="container">
        <h1>PetShop Sigma Gurl</h1>
        <table>
            <tr>
                <th>ID</th>
                <th>Nama Produk</th>
                <th>Harga</th>
                <th>Stok</th>
                <th>Jenis</th>
                <th>Bahan</th>
                <th>Warna</th>
                <th>Untuk</th>
                <th>Size</th>
                <th>Merk</th>
                <th>Foto Produk</th>
            </tr>
            <?php
            foreach($list_petshop as $produk) {
                echo "<tr>";
                echo "<td>" . $produk->get_id() . "</td>";
                echo "<td>" . $produk->get_nama_produk() . "</td>";
                echo "<td>Rp" . number_format($produk->get_harga_produk(), 0, ',', '.') . "</td>";
                echo "<td>" . $produk->get_stok_produk() . "</td>";
                echo "<td>" . $produk->get_jenis() . "</td>";
                echo "<td>" . $produk->get_bahan() . "</td>";
                echo "<td>" . $produk->get_warna() . "</td>";
                echo "<td>" . $produk->get_untuk() . "</td>";
                echo "<td>" . $produk->get_size() . "</td>";
                echo "<td>" . $produk->get_merk() . "</td>";
                echo "<td><img src='" . $produk->get_foto_produk() . "' alt='" . $produk->get_nama_produk() . "'></td>";
                echo "</tr>";
            }
            ?>
        </table>
        
        <footer>
            &copy; Safira Aliyah Azmi. 2309209. C1
        </footer>
    </div>
</body>
</html>