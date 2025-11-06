void tampilNilai90() {
        Node* bantu = head;
        bool ketemu = false;
        cout << "Data dengan nilai = 90:" << endl;
        while (bantu != nullptr) {
            if (bantu->nilai == 90) {
                cout << bantu->nim << " - " << bantu->nama << " - " << bantu->nilai << endl;
                ketemu = true;
            }
            bantu = bantu->next;
        }
        if (!ketemu)
            cout << "Tidak ada data dengan nilai 90." << endl;
    }
