#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Define a node structure for the tree
struct node {
    char data;
    struct node *left;
    struct node *right;
};

// Function to create a new node
struct node* new_node(char data) {
    struct node* node = (struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to build the tree from the prefix expression
struct node* build_tree(char prefix[], int* index) {
    char c = prefix[*index];
    (*index)++;
    if (isdigit(c)) {
        return new_node(c);
    } else {
        struct node* left = build_tree(prefix, index);
        struct node* right = build_tree(prefix, index);
        struct node* node = new_node(c);
        node->left = left;
        node->right = right;
        return node;
    }
}

// Function to print the postfix form of the tree
void print_postfix(struct node* node) {
    if (node == NULL) {
        return;
    }
    print_postfix(node->left);
    print_postfix(node->right);
    printf("%c", node->data);
}

// Main function
int main() {
    char prefix[100];
    printf("Enter the prefix expression: ");
    scanf("%s", prefix);
    int index = 0;
    struct node* root = build_tree(prefix, &index);
    printf("Postfix expression: ");
    print_postfix(root);
    printf("\n");
    return 0;
}
