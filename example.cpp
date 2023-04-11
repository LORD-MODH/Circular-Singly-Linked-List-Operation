#include<iostream>
using namespace std;

// Define the node structure
struct node {
	int data;
	node* next;
};

// Function to create a new node
node* createnode(int data) {
	node* newnode = new node; 
	newnode->next = nullptr;
	newnode->data = data;
	return newnode;
}

// Global head pointer to track the beginning of the list
node* head = nullptr;

// Function to add a new node at the end of the list
void add(int data) {
	node* newnode = createnode(data);
	if (head == nullptr) {
		head = newnode;
		newnode->next = head;
	}
	else {
		node* current = head;
		while (current->next != head){
			current = current->next;
		}
		current->next = newnode;
		newnode->next = head;
	}
}

// Function to add a new node at the beginning of the list
void at_beginning(int data) {
	node* newnode = createnode(data);
	if (head == nullptr) {
		head = newnode;
		newnode->next = head;
	}
	else {
		newnode->next = head;
		head = newnode;
	}
}

// Function to add a new node at a specific position in the list
void insert(int data, int pos) {
	node* newnode = createnode(data);
	if (pos == 0) {
		at_beginning(data);
		delete newnode;
		return;
	}
	else {
		node* current = head;
		int i;
		for (int i = 1; i < pos && current->next != head; i++) {
			current = current->next;
		}
		if (current->next == head && i < pos) {
			at_end(data);
			delete newnode;
			return;
		}
		newnode->next = current->next;
		current->next = newnode;
	}
}

// Main function to demonstrate the usage of the circular linked list
int main() {
	// Adding nodes to the list
	add(10);
	add(20);
	add(30);
	
	// Adding a node at the beginning
	at_beginning(5);

	// Inserting a node at a specific position
	insert(15, 2);

	// Printing the circular linked list
	node* current = head;
	do {
		cout << current->data << " -> ";
		current = current->next;
	} while (current != head);
	cout << "HEAD" << endl;

	return 0;
}
