#include<iostream>
using namespace std;

// Define the structure of a node in the circular linked list
struct node {
    int data;
    node* next;
};

// Function to create a new node with the given data
node* createnode(int data) {
    node* newnode = new node;
    newnode->next = nullptr;
    newnode->data = data;
    return newnode;
}

node* head = nullptr;

// Function to add a new node with the given data at the end of the circular linked list
void add(int data) {
    node* newnode = createnode(data);
    if (head == nullptr) {
        head = newnode;
        newnode->next = head;
    } else {
        node* current = head;
        while (current->next != head){
            current = current->next;
        }
        current->next = newnode;
        newnode->next = head;
    }
}

// Function to add a new node with the given data at the beginning of the circular linked list
void at_beginning(int data) {
    node* newnode = createnode(data);
    if (head == nullptr) {
        head = newnode;
        newnode->next = head;
    } else {
        newnode->next = head;
        head = newnode;
    }
}

// Function to add a new node with the given data at the end of the circular linked list
void at_end(int data) {
    node* newnode = createnode(data);
    if (head == nullptr) {
        head = newnode;
        newnode->next = head;
    } else {
        node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = newnode;
        newnode->next = head;
    }
}

// Function to insert a new node with the given data at the specified position in the circular linked list
void insert(int data, int pos) {
    node* newnode = createnode(data);
    if (pos == 0) {
        at_beginning(data); // If position is 0, insert at the beginning
        delete newnode; // Delete the newnode object as it's not used
        return;
    } else {
        node* current = head;
        int i;
        for (int i = 1; i < pos && current->next != head; i++) {
            current = current->next;
        }
        if (current->next == head && i < pos) {
            at_end(data); // If the position is after the last node, insert at the end
            delete newnode; // Delete the newnode object as it's not used
            return;
        }
        newnode->next = current->next;
        current->next = newnode;
    }
}
