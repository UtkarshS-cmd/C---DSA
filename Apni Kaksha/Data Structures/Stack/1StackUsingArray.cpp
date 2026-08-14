// top = -1

// PUSH(x):
//     if top == MAX-1
//         Stack Overflow
//     else
//         top = top + 1
//         stack[top] = x

// POP():
//     if top == -1
//         Stack Underflow
//     else
//         x = stack[top]
//         top = top - 1
//         return x


#include <iostream>
using namespace std;

#define MAX 5

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Popped: " << arr[top] << endl;
        top--;
    }

    void display() {
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
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