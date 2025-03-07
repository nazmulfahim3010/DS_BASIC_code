#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;

    Node(int item) {
        data = item;
        next = NULL;
        prev = NULL;
    }
};

class linked_list {
private:
    Node *head;
    int count;

public:
    linked_list() {
        head = NULL;
        count = 0;
    }

    void push_back(int item) {
        Node *new_node = new Node(item);

        if (head == NULL) {
            head = new_node;
            count++;
            return;
        }

        Node *temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = new_node;
        new_node->prev = temp;
        count++;
    }

    void print_from_top() {
        if (head == NULL) { // Fixed condition
            cout << "List is empty" << endl;
            return;
        }

        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    linked_list list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.print_from_top(); // Output: 10 20 30
}
