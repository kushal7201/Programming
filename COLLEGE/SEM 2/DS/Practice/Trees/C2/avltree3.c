#include<stdio.h>
#include<malloc.h>

typedef struct node{
    int data;
    struct node* left, *right;
    int height;
}tree;

int getheifght(tree*node){
    if(node==NULL) return 0;
    return node->height;
}

tree* createnode(int value){
    tree* node = (tree*)malloc(sizeof(tree));
    node->data = value;
    node->left = node->right = NULL;
    node->height = 1;
    return node;
}

int getbalaccefactor(tree*node){
    if(node==NULL) return 0;
    return getheifght(node->left)-getheifght(node->right);
}

tree* leftrotate(tree* node)
{
    tree*leftch = node->left;
    tree*leftrightch = leftch->right;

}
int main()
{
    
    return 0;
}