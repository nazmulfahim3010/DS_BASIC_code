#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int item) {
        data = item;
        next = NULL;
    }
};

class linked_list {
private:
    Node *head;

public:
    // Constructor to initialize head
    linked_list() {
        head = NULL;
    }

    void append(int item) {
        Node *new_node = new Node(item);

        if (head == NULL) {
            head = new_node;  // Assign new_node to head
            return;
        }

        Node *temp = head;

        // Traverse till the last node
        while (temp->next != NULL) {
            temp = temp->next;
        }
        
        temp->next = new_node;  // Append new node at the end
    }

    void print() {
        if (head == NULL) {
            cout << "The list is empty" << endl;
            return;
        }
        
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " "; // Print first
            temp = temp->next;         // Then move temp forward
        }
        cout << endl;
    }
};

int main() {
    linked_list list;
    list.append(10);
    list.append(20);
    list.append(30);
    list.print(); // Output: 10 20 30

    return 0;
}
