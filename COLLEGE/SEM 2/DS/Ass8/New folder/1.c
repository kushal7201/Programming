#include <stdio.h>
#include <stdlib.h>

// Data structure to store a binary tree node
typedef struct Node {
    int key;
    struct Node* left;
    struct Node* right;
}tree;

// Function to create a new binary tree node
struct Node* createNode(int key) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->key = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to perform preorder traversal on a given binary tree
void preorder(struct Node* root) {
    if (root == NULL) {
        return;
    }

    printf("%d ", root->key);
    preorder(root->left);
    preorder(root->right);
}



// Function to convert a normal binary tree into a Left-child
// right-sibling (LC-RS) binary tree
void convert(struct Node* root) {
    if (root == NULL) {
        return;
    }

    convert(root->left);
    convert(root->right);

    if (root->left == NULL) {
        root->left = root->right;
        root->right = NULL;
    } else {
        struct Node* temp = root->left;
        while (temp->right != NULL) {
            temp = temp->right;
        }
        temp->right = root->right;
        root->right = NULL;
    }
}

int main() {
    /* Construct the following tree
              1
            /  \
           /    \
          2      3
         / \    /
         4  5  6
               / \
              7   8
    */

    // struct Node* root = createNode(1);
    // root->left = createNode(2);
    // root->right = createNode(3);
    // root->left->left = createNode(4);
    // root->left->right = createNode(5);
    // root->right->left = createNode(6);
    // root->right->left->left = createNode(7);
    // root->right->left->right = createNode(8);

    // convert(root);
    // preorder(root);

    // return 0;
}
