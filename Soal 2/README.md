# Soal 2 : Sistem Perhitungan Damage Elemental Genshin Impact (Operator Overloading)

## KERJAKAN MAIN SAJA

## Deskripsi
Kamu adalah seorang developer game Genshin Impact. Tugasmu adalah membuat sistem untuk menghitung damage elemental reaction menggunakan bilangan kompleks. Setiap elemental damage dapat direpresentasikan sebagai bilangan kompleks dimana bagian real adalah base damage dan bagian imajiner adalah elemental multiplier.

Buatlah class `ElementalDamage` yang dapat melakukan operasi:
- Penjumlahan damage elemental (+)
- Pengurangan damage elemental (-)
- Perkalian damage elemental (*)
- Pembagian damage elemental (/)
- Perbandingan kesamaan (==)
- Input stream (>>)
- Output stream (<<)

Setiap elemental damage memiliki base damage (real) dan elemental multiplier (imajiner). Implementasikan operator overloading untuk memudahkan perhitungan damage reaction.

## Input
- Dua buah elemental damage dalam format "base_damage elemental_multiplier"
- Contoh: "100 1.5" berarti 100 base damage + 1.5 elemental multiplier

## Output
- Hasil operasi penjumlahan, pengurangan, perkalian, dan pembagian elemental damage
- Hasil perbandingan kesamaan dua elemental damage
- Format output: "a + bi" untuk multiplier positif, "a - bi" untuk multiplier negatif

## Expected Input
```
150 2.5
50 1.2
```

## Expected Output
```
Elemental Damage 1: 150 + 2.5i
Elemental Damage 2: 50 + 1.2i
Reaction (Addition): 200 + 3.7i
Reaction (Subtraction): 100 + 1.3i
Reaction (Multiplication): 72 + 305i
Reaction (Division): 2.4 + 0.7i
Apakah damage sama? Tidak
```

## Petunjuk
- Untuk reaction multiplication: (a+bi)(c+di) = (ac-bd) + (ad+bc)i
- Untuk reaction division: (a+bi)/(c+di) = [(ac+bd) + (bc-ad)i] / (c²+d²)
- Implementasikan operator +, -, *, /, ==, >>, dan <<
- Perhatikan format output untuk elemental multiplier negatif
- Gunakan precision yang sesuai untuk output floating point
- Pastikan division tidak dilakukan dengan damage nol (c²+d² ≠ 0)
