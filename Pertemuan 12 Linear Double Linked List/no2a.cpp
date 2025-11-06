void tambahData(string nim, string nama, int nilai) {
        Node* baru = new Node;
        baru->nim = nim;
        baru->nama = nama;
        baru->nilai = nilai;
        baru->next = nullptr;

        if (head == nullptr || head->nilai > nilai) {
            baru->next = head;
            head = baru;
        } else {
            Node* bantu = head;
            while (bantu->next != nullptr && bantu->next->nilai < nilai) {
                bantu = bantu->next;
            }
            baru->next = bantu->next;
            bantu->next = baru;
        }
    }
