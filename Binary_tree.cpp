#include <iostream>

struct Node {
    int data;
    Node *left, *right;
};

void showTree(Node *&);
void addNode(int, Node *&);
void removeTree(Node *&);

int main() {
    Node *tree = NULL;

    srand(time(NULL));
    for (int i = 0; i < 42; i++) {
        addNode(rand() % 42, tree);
    }
    showTree(tree);
    removeTree(tree);

    std::cin.get();

    return 0;
}

void showTree(Node *&node) {
    if (node != NULL) {
        showTree(node->left);
        std::cout << node->data << ' ';
        showTree(node->right);
    }
}

void addNode(int data, Node *&node) {
    if (NULL == node) {
        node = new Node;
        node->data = data;
        node->left = node->right = NULL;
    }

    if (data < node->data) {
        if (node->left != NULL) {
            addNode(data, node->left);
        }
        else {
            node->left = new Node;
            node->left->left = node->left->right = NULL;
            node->left->data = data;
        }
    }

    if (data > node->data) {
        if (node->right != NULL){
            addNode(data, node->right);
        }
        else {
            node->right = new Node;
            node->right->left = node->right->right = NULL;
            node->right->data = data;
        }
    }
}

void removeTree(Node *&node){
    if (node != NULL) {
        removeTree(node->left);
        removeTree(node->right);
        delete node;
    }
}
