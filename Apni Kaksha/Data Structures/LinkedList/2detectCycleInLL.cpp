#include <iostream>
#include <unordered_set> // Used for safe list printing
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() {
        head = tail = nullptr;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    
    void createCycle(int targetVal) {
        if (tail == nullptr) return;
        
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == targetVal) {
                tail->next = temp; 
                cout << "Cycle created! Tail now points back to node with data: " << targetVal << endl;
                return;
            }
            temp = temp->next;
        }
    }

    Node* findCycleStart() {
        Node* slow = head;
        Node* fast = head;

        bool hasCycle = false;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                hasCycle = true;
                break;
            }
        }

        // Step 2: If cycle exists, find the starting node
        if (hasCycle) {
            slow = head; // Reset slow to head

            while (slow != fast) {
                slow = slow->next;
                fast = fast->next; // Both move 1 step now
            }
            return slow; // This is the start of the cycle
        }
        
        return nullptr; // No cycle
    }

   // Prints the list safely using basic pointers (No extra libraries needed)
void printCycleBasic() {
    // 1. Find where the cycle starts using slow/fast pointers
    Node* cycleStart = findCycleStart(); 

    Node* temp = head;
    bool passedCycleStart = false;

    cout << "List Path: ";
    while (temp != nullptr) {
        // If we are about to loop back to the start of the cycle
        if (cycleStart != nullptr && temp->next == cycleStart && passedCycleStart) {
            cout << temp->data << " -> (loops back to " << cycleStart->data << ")" << endl;
            return;
        }

        cout << temp->data << " -> ";

        // Track if we have encountered the cycle start node for the first time
        if (temp == cycleStart) {
            passedCycleStart = true;
        }

        temp = temp->next;
    }
    cout << "NULL" << endl;
}

};

int main() {
    LinkedList ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1); // List is: 1 -> 2 -> 3 -> 4 -> 5 -> NULL

    // Create a loop pointing from 5 back to 3
    ll.createCycle(3); 

    // Print the list and highlight the loop
    ll.printWithCycleVisual();

    return 0;
}
