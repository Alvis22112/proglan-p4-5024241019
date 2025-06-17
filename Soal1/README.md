# Soal 1 : Sistem Vektor Fisika F1 (Operator Overloading)

## JANGAN UBAH MAIN

## Deskripsi
Kamu adalah seorang insinyur aerodinamika di tim F1. Tugasmu adalah membuat sistem perhitungan vektor untuk menganalisis gaya-gaya yang bekerja pada mobil F1 selama balapan. Gunakan konsep operator overloading untuk memudahkan operasi matematika pada vektor 2D.

Buatlah class `Vector2D` yang dapat melakukan operasi:
- Penjumlahan vektor (+)
- Pengurangan vektor (-)
- Perkalian dengan skalar (*)
- Pembagian dengan skalar (/)
- Perbandingan kesamaan (==)
- Output stream (<<)

Setiap vektor memiliki komponen x dan y. Implementasikan operator overloading agar operasi matematika pada vektor dapat dilakukan dengan mudah dan intuitif.

## Input
- Dua buah vektor (x1, y1) dan (x2, y2)
- Sebuah nilai skalar untuk perkalian dan pembagian

## Output
- Hasil operasi penjumlahan, pengurangan, perkalian, dan pembagian vektor
- Hasil perbandingan kesamaan dua vektor
- Format output: "Vector(x, y)"

## Expected Input
```
3.5 2.1
1.2 4.8
2.0
```

## Expected Output
```
Vektor 1: Vector(3.5, 2.1)
Vektor 2: Vector(1.2, 4.8)
Penjumlahan: Vector(4.7, 6.9)
Pengurangan: Vector(2.3, -2.7)
Perkalian dengan 2: Vector(7, 4.2)
Pembagian dengan 2: Vector(1.75, 1.05)
Apakah sama? Tidak
```

## Petunjuk
- Implementasikan operator +, -, *, /, ==, dan << (output stream)
- Perkalian dan pembagian dilakukan dengan skalar (bilangan tunggal)
- Gunakan precision yang sesuai untuk output floating point
- Pastikan pembagian tidak dilakukan dengan nol
