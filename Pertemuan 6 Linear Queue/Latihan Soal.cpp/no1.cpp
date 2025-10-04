Deklarasi:
    Queue Q
    Record data
    integer count ← 0

Deskripsi:
    Inisialisasi Q (kosongkan antrian)

    Selama (count < 10) dan (antrian tidak penuh) lakukan:
        input data
        masukkan data ke antrian (ENQUEUE(Q, data))
        count ← count + 1
    Jika antrian penuh:
        tampilkan "Antrian penuh, pengisian dihentikan"
    Jika count = 10:
        tampilkan "Sudah mengisi 10 record"
Selesai

