#include <iostream>
using namespace std;

struct Node {
    char data;
    Node *kiri, *kanan;
};

// Membuat node baru
Node* buatNode(char data) {
    Node* node = new Node;
    node->data = data;
    node->kiri = NULL;
    node->kanan = NULL;
    return node;
}

// PreOrder : Root - Left - Right
void preOrder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOrder(root->kiri);
        preOrder(root->kanan);
    }
}

// InOrder : Left - Root - Right
void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->kiri);
        cout << root->data << " ";
        inOrder(root->kanan);
    }
}

// PostOrder : Left - Right - Root
void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->kiri);
        postOrder(root->kanan);
        cout << root->data << " ";
    }
}

int main() {

    // Membangun tree sesuai output soal
    /*
                R
               / \
              A   E
             /
            S
           / \
          I   T
    */

    Node* R = buatNode('R');
    Node* A = buatNode('A');
    Node* E = buatNode('E');
    Node* S = buatNode('S');
    Node* I = buatNode('I');
    Node* T = buatNode('T');

    R->kiri = A;
    R->kanan = E;
    A->kiri = S;
    S->kiri = I;
    S->kanan = T;

    cout << "Tampilan secara PreOrder  : ";
    preOrder(R);

    cout << "\nTampilan secara InOrder   : ";
    inOrder(R);

    cout << "\nTampilan secara PostOrder : ";
    postOrder(R);

    cout << endl;
    return 0;
}
