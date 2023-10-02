#include<stdio.h>
#include<malloc.h>

// Write a C program that reads the prefix expression, builds the tree and prints the post fix form of it
// Input: *+AB-CD
// Output: AB+CD-*
// Input: *-A/BC-/AKL
// Output: ABC/-AK/L-*

typedef struct node
{
    char data;
    struct node* left, *right;
}tree;

tree* createnode(tree* node, char value){
    node = (tree*)malloc(sizeof(tree));
    node->data = value;
    node->left = node->right = NULL;
    return node;
}

tree* insert(tree* node, char value){
    if(node==NULL) return createnode(node, value);
    else{
        if(node->data>value) node->left = insert(node->left, value);
        else if(node->data<value) node->right = insert(node->right, value);
    }
    return node;
}

void preorder(tree* node){ // NLR
    if(node!=NULL){
        printf("%c ",node->data);
        preorder(node->left);
        preorder(node->right);
    }
}

void inorder(tree* node){ // LNR
    if(node!=NULL){
        inorder(node->left);
        printf("%c ",node->data);
        inorder(node->right);
    }
}

void postorder(tree* node){ // LRN
    if(node!=NULL){
        postorder(node->left);
        postorder(node->right);
        printf("%c ",node->data);
    }
}

void pribintree(tree* node, int space){
    if(node==NULL) return;
    else{
        space+=10;
        pribintree(node->right, space);
        for(int i =10;i<space; i++) printf(" ");
        printf("%c", node->data);
        printf("\n");
        pribintree(node->left, space);
    }
}

tree* buildtree(char prefix[], int* index){
    if(prefix[*index]=='\0') return NULL;
    tree* node = createnode(node, prefix[*index]);
    (*index)++;
    // if(prefix[*index]=='+' || prefix[*index]=='-' || prefix[*index]=='*' || prefix[*index]=='/'){
        node->data= prefix[*index];   
        node->left = buildtree(prefix, index);
        node->right = buildtree(prefix, index);
    // }
    return node;
}

void printpostfix(tree* node){
    if(node==NULL) return;
    printpostfix(node->left);
    printpostfix(node->right);
    printf("%c", node->data);
}

int main(){
    char prefix[100];
    printf("Enter the prefix expression: ");
    scanf("%s", prefix);
    int index = 0;
    tree* root = buildtree(prefix, &index);
    printf("Postfix expression: ");
    printpostfix(root);
    // pribintree(root, 0);
    return 0;
}