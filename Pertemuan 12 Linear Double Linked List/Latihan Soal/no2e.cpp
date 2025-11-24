void rataRata() {
        Node* bantu = head;
        int total = 0, jumlah = 0;
        while (bantu != nullptr) {
            total += bantu->nilai;
            jumlah++;
            bantu = bantu->next;
        }

        if (jumlah == 0)
            cout << "Tidak ada data untuk dihitung rata-rata." << endl;
        else
            cout << "Rata-rata nilai kelas = " << (float)total / jumlah << endl;
    }
};
