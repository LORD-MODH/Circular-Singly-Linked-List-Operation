# Circular-Singly-Linked-List-Operation

This project demonstrates the basic implementation of a circular linked list in C++. It provides functions to create a new node, add a new node at the beginning or the end of the list, and insert a new node at a specified position in the list.

# Structure

The node structure has the following components:

int data: The data stored in the node.

node* next: A pointer to the next node in the circular linked list.

# Functions

**node* createnode(int data):** Creates a new node with the given data.

**void add(int data):** Adds a new node with the given data at the end of the circular linked list.

**void at_beginning(int data):** Adds a new node with the given data at the beginning of the circular linked list.

**void at_end(int data):** Adds a new node with the given data at the end of the circular linked list.

**void insert(int data, int pos):** Inserts a new node with the given data at the specified position in the circular linked list.


# Usage
Include the circular linked list implementation in your C++ project.
Use the provided functions to create and manipulate the circular linked list according to your requirements.

# Example:

int main() {

    add(10); // Add a new node with data 10 to the list
    add(20); // Add a new node with data 20 to the list
    at_beginning(5); // Add a new node with data 5 at the beginning of the list
    at_end(30); // Add a new node with data 30 at the end of the list
    insert(15, 2); // Insert a new node with data 15 at position 2 in the list

    // Perform other operations as needed

    return 0;
}

