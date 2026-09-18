# Pemrograman_EvangelistaAlmakenyaKinanthi_Mariposite_TLS26
Repositori ini berisi penyelesaian untuk Tugas Pemrograman Dasar TLS 2026 yang terdiri dari dua permasalahan logika dan algoritma menggunakan bahasa pemrograman C++.

## Ringkasan Permasalahan

### Problem 1: The Last Astronaut
Simulasi eliminasi astronot yang berdiri dalam lingkaran. Eliminasi dilakukan berputar berdasarkan nilai hitungan (K). Setiap kali astronot tereliminasi, nilai (K) akan diperbarui secara dinamis (bertambah 2 jika nomor astronot genap, berkurang 1 jika ganjil, dengan batas minimal K=2) hingga tersisa 1 astronot terakhir.

### Problem 2: Alien-In-The-Middle
Sistem enkripsi teks sederhana untuk mengubah *plaintext* menjadi *ciphertext*. Karakter/huruf pertama tidak mengalami perubahan. Huruf kedua dan seterusnya digeser berdasarkan urutan alfabet dari huruf tepat sebelumnya (A/a=1, B/b=2, dst.). Jika hasil pergeseran melewati huruf Z, perhitungannya diputar kembali dari huruf A (*modulo 26*).

## Struktur File
- `README.md` : Dokumen penjelasan dan rincian tugas.
- `problem1_last_astronaut.cpp` : Implikasi kode C++ untuk Problem 1.
- `problem2_alien_in_the_middle.cpp` : Implementasi kode C++ untuk Problem 2.
