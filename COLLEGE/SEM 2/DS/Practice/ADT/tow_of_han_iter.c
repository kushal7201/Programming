#include <stdio.h>
#include <stdlib.h>

// Define a structure to represent the state of a disk
struct Disk {
    int size;
    int source;
    int destination;
};

// Define a stack data structure for storing disks
struct Stack {
    int top;
    int capacity;
    struct Disk *disks;
};

// Function to create a new stack with the given capacity
struct Stack* createStack(int capacity) {
    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->disks = (struct Disk*)malloc(sizeof(struct Disk) * capacity);
    return stack;
}

// Function to check if the given stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to check if the given stack is full
int isFull(struct Stack *stack) {
    return stack->top == stack->capacity - 1;
}

// Function to push a disk onto the given stack
void push(struct Stack *stack, struct Disk disk) {
    if (isFull(stack)) {
        printf("Error: Stack overflow!\n");
        exit(1);
    }
    stack->disks[++stack->top] = disk;
}

// Function to pop a disk from the given stack
struct Disk pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack underflow!\n");
        exit(1);
    }
    return stack->disks[stack->top--];
}

// Function to move a disk from one stack to another
void moveDisk(struct Stack *source, struct Stack *destination) {
    struct Disk disk = pop(source);
    push(destination, disk);
    printf("Move disk %d from tower %d to tower %d\n", disk.size, disk.source, disk.destination);
}

// Function to solve the Tower of Hanoi problem iteratively
void solveTowerOfHanoi(int n, struct Stack *source, struct Stack *auxiliary, struct Stack *destination) {
    int i, totalMoves;
    struct Disk disk;

    // Initialize the source stack with n disks
    for (i = n; i >= 1; i--) {
        disk.size = i;
        disk.source = 1;
        disk.destination = 3;
        push(source, disk);
    }

    if (n % 2 == 0)
