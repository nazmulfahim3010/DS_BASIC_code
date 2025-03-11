#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
    
    node(int item) {
        data = item;
        next = NULL;
        prev = NULL;
    }
};

class queue {
private:
    node* head;
    int count;

public:
    queue() {
        head = NULL;
        count = 0;
    }

    void enqueue(int item) {
        node* new_node = new node(item);
        if (head == NULL) {
            head = new_node;
        } else {
            node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->prev = temp;
        }
        count++; // Increment count every time an item is enqueued
    }

    void print() {
        if (head == NULL) {
            return;
        }
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void dequeue() {
        if (head == nullptr) { // Fixing comparison issue
            return;
        }

        node* temp = head;
        head = head->next;

        if (head != nullptr) { // Ensure we are not accessing nullptr->prev
            head->prev = nullptr;
        }

        delete temp; // Free memory correctly
        count--; // Decrement count
    }

    int size() {
        return count;
    }
};

int main() {
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);

    cout << "Size before dequeue: " << q.size() << endl;

    q.dequeue();
    cout << "Queue after dequeue: ";
    q.print();

    cout << "Size after dequeue: " << q.size() << endl;

    return 0;
}
