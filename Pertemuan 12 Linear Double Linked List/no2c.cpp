void tampilSemua() {
        Node* bantu = head;
        if (bantu == nullptr) {
            cout << "Data masih kosong." << endl;
            return;
        }
        cout << "Seluruh data mahasiswa:" << endl;
        while (bantu != nullptr) {
            cout << bantu->nim << " - " << bantu->nama << " - " << bantu->nilai << endl;
            bantu = bantu->next;
        }
    }
