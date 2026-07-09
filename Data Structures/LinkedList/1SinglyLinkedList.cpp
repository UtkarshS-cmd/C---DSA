// Singly Linked List
// Approach: Learn node insertion and traversal.
// Beginner-friendly implementation for DSA practice.

#include <bits/stdc++.h>
using namespace std;

struct Node { int data; Node* next; Node(int x) : data(x), next(nullptr) {} };

void printList(Node* head) { while (head) { cout << head->data << " "; head = head->next; } cout << "\n"; }

int main() { Node* head = new Node(1); head->next = new Node(2); head->next->next = new Node(3); printList(head); return 0; }

