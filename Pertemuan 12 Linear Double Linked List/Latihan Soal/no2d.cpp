void hapusData(string nim) {
        Node* bantu = head;
        Node* prev = nullptr;

        while (bantu != nullptr && bantu->nim != nim) {
            prev = bantu;
            bantu = bantu->next;
        }

        if (bantu == nullptr) {
            cout << "Data dengan NIM " << nim << " tidak ditemukan." << endl;
            return;
        }

        if (prev == nullptr)
            head = bantu->next;
        else
            prev->next = bantu->next;

        delete bantu;
        cout << "Data dengan NIM " << nim << " berhasil dihapus." << endl;
    }
