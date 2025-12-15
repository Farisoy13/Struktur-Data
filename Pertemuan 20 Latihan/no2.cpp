#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// ================= INSERT =================
void insertNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    cout << "\nInsert data: " << value << endl;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        cout << "Node pertama dibuat, menunjuk ke dirinya sendiri\n";
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        cout << "Node berhasil ditambahkan di akhir\n";
    }
}

// ================= DELETE =================
void deleteNode(int value) {
    cout << "\nHapus data: " << value << endl;

    if (head == NULL) {
        cout << "List kosong, tidak ada yang dihapus\n";
        return;
    }

    Node* curr = head;
    Node* prev = NULL;

    // Jika head yang dihapus
    if (head->data == value) {
        if (head->next == head) {
            delete head;
            head = NULL;
            cout << "Node satu-satunya dihapus\n";
            return;
        }

        while (curr->next != head) {
            curr = curr->next;
        }
        curr->next = head->next;
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node head berhasil dihapus\n";
        return;
    }

    prev = head;
    curr = head->next;

    while (curr != head) {
        if (curr->data == value) {
            prev->next = curr->next;
            delete curr;
            cout << "Node berhasil dihapus\n";
            return;
        }
        prev = curr;
        curr = curr->next;
    }

    cout << "Data tidak ditemukan\n";
}

// ================= TRAVERSE =================
void traverse() {
    if (head == NULL) {
        cout << "\nList kosong\n";
        return;
    }

    cout << "\nIsi Circular Linked List: ";
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(kembali ke head)\n";
}

// ================= MAIN =================
int main() {
    insertNode(10);
    traverse();

    insertNode(20);
    traverse();

    insertNode(30);
    traverse();

    deleteNode(20);
    traverse();

    deleteNode(10);
    traverse();

    deleteNode(30);
    traverse();

    return 0;
}
