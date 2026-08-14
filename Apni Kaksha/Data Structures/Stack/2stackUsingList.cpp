// PUSH(x):
//     Create new node
//     newNode->data = x
//     newNode->next = top
//     top = newNode

// POP():
//     if top == NULL
//         Stack Underflow
//     else
//         temp = top
//         top = top->next
//         delete temp

#include <iostream>
using namespace std;

class Stack {
    struct Node {
        int data;
        Node* next;

        Node(int value) {
            data = value;
            next = nullptr;
        }
    };

    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(int x) {
        Node* newNode = new Node(x);

        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow\n";
            return;
        }

        Node* temp = top;

        cout << "Popped: " << top->data << endl;

        top = top->next;

        delete temp;
    }

    void display() {
        Node* temp = top;

        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();
    s.display();

    return 0;
}