Deklarasi:
    Queue Q
    Record data
    integer count ← 0

Deskripsi:
    Selama (count < 10) dan (antrian tidak kosong) lakukan:
        hapus data dari antrian (DEQUEUE(Q, data))
        count ← count + 1
    Jika antrian kosong:
        tampilkan "Antrian kosong, proses delete dihentikan"
    Jika count = 10:
        tampilkan "Sudah menghapus 10 record"
Selesai

