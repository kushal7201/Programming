#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node* left, *right;
}tree;

tree* createnode(tree* node, int value){
    node = (tree*)malloc(sizeof(tree));
    node->data = value;
    node->left = node->right = NULL;
    return node;
}

tree* insert(tree* node, int value){
    if(node==NULL) return createnode(node, value);
    else{
        if(node->data>value) node->left = insert(node->left, value);
        else if(node->data<value) node->right = insert(node->right, value);
    }
    return node;
}

void preorder(tree* node){ // NLR
    if(node!=NULL){
        printf("%d ",node->data);
        preorder(node->left);
        preorder(node->right);
    }
}
void inorder(tree* node){ // LNR
    if(node!=NULL){
        inorder(node->left);
        printf("%d ",node->data);
        inorder(node->right);
    }
}
void postorder(tree* node){ // LRN
    if(node!=NULL){
        postorder(node->left);
        postorder(node->right);
        printf("%d ",node->data);
    }
}

void pribintree(tree* node, int space){
    if(node==NULL) return;
    else{
        space+=10;
        pribintree(node->right, space);
        for(int i =10;i<space; i++) printf(" ");
        printf("%d", node->data);
        printf("\n");
        pribintree(node->left, space);
    }
}

// tree* delmin(tree*node){
//     if(node->left==NULL){
//         if(node->right!=NULL){
//             node = node->right;
//         }
//         else node = NULL;
//     }
//     else node->left= delmin(node->left);
//     return node;
// }

// tree* inordersuc(tree* root, tree* node){
//     tree* succesor = NULL;
//     while(root!=NULL){
//         if(root->data>node->data){
//             succesor = root;
//             root = root->left;
//         }
//         else{
//             root = root->right;
//         }
//     }
//     return succesor;
// }

tree* inordersuc(tree* root, tree* node){
    tree* successor = NULL;
    while(root!=NULL){
        if(root->data>=node->data){
            successor = root;
            root = root->left;
        }
        else root = root->right;
    }
    return successor;
}

tree* deletenode(tree* root, tree* node){
    if(root->data>node->data) root->left = deletenode(root->left, node);
    else if(root->data<node->data) root->right = deletenode(root->right, node);
    else{
        if(root->right==NULL){
            tree* temp = root->left;
            free(root);
            return temp;
        }
        else if(root->left==NULL){
            tree* temp = root->right;
            free(root);
            return temp;
        }
        else{
            
            tree* temp = inordersuc(root->right, node);
            root->data = temp->data;
            root->right = deletenode(root->right, temp);
        }
    }
    return root;
}

// write a code to build min heap from an array in the same array
// void heapify(int* arr, int n, int i)
// {
//      int left,right,largest;
//     // store largest as the root element
//     largest = i;
//     left = 2 * i ;
//     right  = 2 * i + 1;
//     // now check whether the right and left right is larger than the root or not
//     if (left < n && arr[left] > arr[largest])
//     {
//         largest = left;
//     }

//     if (right < n && arr[right] > arr[largest])
//     {
//         largest = right;
//     }

//     // if the largest is not the root then swap the root with the largest
//     if (largest != i)
//     {
//         int temp = arr[i];
//         arr[i] = arr[largest];
//         arr[largest] = temp;
//         // again heapify the subtree with root as largest
//         heapify(arr, n, largest);
//     }
// }

void heapify(int arr[], int n, int i){
    int largest, left, right;
    largest = i;
    left = 2*i ;
    right = 2*i+1;
    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest = right;
    }
    if(largest!=i){
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n ,largest);
    }
}

void print_array(int* arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

}


int main()
{
    // tree* root = NULL;
    // root = createnode(root, 350);
    // insert(root, 180);    
    // insert(root, 380);    
    // insert(root, 430);    
    // insert(root, 290);    
    // insert(root, 200);    
    // insert(root, 109);
    // insert(root, 75);
    // insert(root, 39);
    // insert(root, 370);
    // inorder(root);
    // printf("\n");
    // // pribintree(root, 0);
    // // delmin(root);
    // deletenode(root, root->right);
    // pribintree(root, 0);
    
    int arr[] = { 10, 30, 5, 63, 22, 12, 56, 33 };
    printf("size = %d",sizeof(arr));
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\nArray before sorting:\n");
    print_array(arr, n);
    heapify(arr, n, 0);
    printf("\n\nArray after sorting:\n");
    print_array(arr, n);
    return 0;
}