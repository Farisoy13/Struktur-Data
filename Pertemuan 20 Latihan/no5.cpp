#include <iostream>
using namespace std;

// Struktur Node
struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

// ================= ENQUEUE =================
void enqueue(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    cout << "\nEnqueue: " << value << endl;

    if (rear == NULL) {
        front = rear = newNode;
        cout << "Antrian kosong, node menjadi front dan rear\n";
    } else {
        rear->next = newNode;
        rear = newNode;
        cout << "Data ditambahkan ke belakang antrian\n";
    }
}

// ================= DEQUEUE =================
void dequeue() {
    if (front == NULL) {
        cout << "\nQueue kosong, tidak ada yang dihapus\n";
        return;
    }

    Node* temp = front;
    cout << "\nDequeue: " << temp->data << endl;

    front = front->next;

    if (front == NULL) {
        rear = NULL;
        cout << "Queue menjadi kosong\n";
    }

    delete temp;
}

// ================= DISPLAY =================
void display() {
    if (front == NULL) {
        cout << "\nQueue kosong\n";
        return;
    }

    cout << "\nIsi antrian: ";
    Node* temp = front;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// ================= MAIN =================
int main() {

    enqueue(10);
    display();

    enqueue(20);
    display();

    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    display();

    dequeue();
    display();

    dequeue();
    display();

    dequeue();
    display();

    return 0;
}
