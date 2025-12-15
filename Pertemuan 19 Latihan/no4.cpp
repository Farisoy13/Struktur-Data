#include <iostream>
using namespace std;

// Struktur Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Membuat node baru
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Traversal Preorder
void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Traversal Inorder
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Traversal Postorder
void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

// Fungsi utama
int main() {

    /*
            10
           /  \
          5    15
         / \   / \
        3   7 12  20
    */

    Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);

    root->left->left = createNode(3);
    root->left->right = createNode(7);

    root->right->left = createNode(12);
    root->right->right = createNode(20);

    cout << "Traversal Preorder   : ";
    preorder(root);

    cout << "\nTraversal Inorder    : ";
    inorder(root);

    cout << "\nTraversal Postorder  : ";
    postorder(root);

    return 0;
}
