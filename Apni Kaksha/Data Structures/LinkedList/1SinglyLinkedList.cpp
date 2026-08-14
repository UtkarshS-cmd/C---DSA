#include <iostream>
#include <cmath>
#include <algorithm> 
#include <climits>  

using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int pop_front() {
        if (head == NULL) {
            cout << "Empty LL\n";
            return -1;
        }

        Node* temp = head;
        int value = temp->data;
        head = head->next;

        if (head == NULL) {
            tail = NULL;
        }

        delete temp;
        return value;
    }

    int pop_back() {
        if (head == NULL) {
            cout << "Empty LL\n";
            return -1;
        }

        int value = tail->data;

        if (head == tail) {
            delete head;
            head = tail = NULL;
            return value;
        }

        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = NULL;
        return value;
    }

    int pop_at_specific(int index) {
        if (head == NULL) {
            cout << "Empty LL\n";
            return -1;
        }

        if (index < 0) {
            cout << "Invalid index\n";
            return -1;
        }

        if (index == 0) {
            return pop_front();
        }

        Node* prev = head;
        for (int i = 0; i < index - 1 && prev->next != NULL; i++) {
            prev = prev->next;
        }

        if (prev->next == NULL) {
            cout << "Index out of range\n";
            return -1;
        }

        Node* curr = prev->next;
        int value = curr->data;
        prev->next = curr->next;

        if (curr == tail) {
            tail = prev;
        }

        delete curr;
        return value;
    }

    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }

    int sum_ll() {
        Node* temp = head;
        int sum = 0;
        while (temp != NULL) {
            sum += temp->data;
            temp = temp->next;
        }
        return sum;
    }

    float avg_ll() {
        if (head == NULL) return 0;

        Node* temp = head;
        int count = 0;
        int sum = 0;
        while (temp != NULL) {
            sum += temp->data;
            count++;
            temp = temp->next;
        }

        return (float)sum / count;
    }

    int largest() {
        if (head == NULL) return INT_MIN;

        Node* temp = head;
        int maxNode = head->data;
        while (temp != NULL) {
            maxNode = max(maxNode, temp->data);
            temp = temp->next;
        }
        return maxNode;
    }

    int smallest() {
        if (head == NULL) return INT_MAX;

        Node* temp = head;
        int minNode = head->data;
        while (temp != NULL) {
            minNode = min(minNode, temp->data);
            temp = temp->next;
        }
        return minNode;
    }

    int count() {
        Node* temp = head;
        int cnt = 0;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    int evenElements() {
        Node* temp = head;
        int cnt = 0;
        while (temp != NULL) {
            if (temp->data % 2 == 0) {
                cnt++;
            }
            temp = temp->next;
        }
        return cnt;
    }

    int oddElements() {
        Node* temp = head;
        int cnt = 0;
        while (temp != NULL) {
            if (temp->data % 2 != 0) {
                cnt++;
            }
            temp = temp->next;
        }
        return cnt;
    }

    int positiveElements() {
        Node* temp = head;
        int cnt = 0;
        while (temp != NULL) {
            if (temp->data > 0) {
                cnt++;
            }
            temp = temp->next;
        }
        return cnt;
    }

    int negativeElements() {
        Node* temp = head;
        int cnt = 0;
        while (temp != NULL) {
            if (temp->data < 0) {
                cnt++;
            }
            temp = temp->next;
        }
        return cnt;
    }

    int zeroElements() {
        Node* temp = head;
        int cnt = 0;
        while (temp != NULL) {
            if (temp->data == 0) {
                cnt++;
            }
            temp = temp->next;
        }
        return cnt;
    }

    int secondLargest() {
        if (head == NULL || head->next == NULL) return INT_MIN;

        int maxEle = INT_MIN;
        int secondMax = INT_MIN;
        Node* temp = head;

        while (temp != NULL) {
            if (temp->data > maxEle) {
                secondMax = maxEle;
                maxEle = temp->data;
            } else if (temp->data > secondMax && temp->data != maxEle) {
                secondMax = temp->data;
            }
            temp = temp->next;
        }

        return secondMax;
    }

    int secondSmallest() {
        if (head == NULL || head->next == NULL) return INT_MAX;

        int minEle = INT_MAX;
        int secondMin = INT_MAX;
        Node* temp = head;

        while (temp != NULL) {
            if (temp->data < minEle) {
                secondMin = minEle;
                minEle = temp->data;
            } else if (temp->data < secondMin && temp->data != minEle) {
                secondMin = temp->data;
            }
            temp = temp->next;
        }

        return secondMin;
    }

    int countOccurence(int val) {
        Node* temp = head;
        int cnt = 0;

        while (temp != NULL) {
            if (temp->data == val) {
                cnt++;
            }
            temp = temp->next;
        }
        return cnt;
    }

    int firstOccurence(int val) {
        Node* temp = head;
        int index = 0;

        while (temp != NULL) {
            if (temp->data == val) {
                return index;
            }
            temp = temp->next;
            index++;
        }
        return -1;
    }

    int lastOccurence(int val) {
        Node* temp = head;
        int lastIndex = -1;
        int index = 0;

        while (temp != NULL) {
            if (temp->data == val) {
                lastIndex = index;
            }
            temp = temp->next;
            index++;
        }
        return lastIndex;
    }

    int greaterThan(int val) {
        Node* temp = head;
        int cnt = 0;

        while (temp != NULL) {
            if (temp->data > val) {
                cnt++;
            }
            temp = temp->next;
        }
        return cnt;
    }

    int lessThanAvgVal() {
        if (head == NULL) return 0;

        float avg = avg_ll();
        Node* temp = head;
        int cnt = 0;

        while (temp != NULL) {
            if (temp->data < avg) {
                cnt++;
            }
            temp = temp->next;
        }
        return cnt;
    }

    Node* reverseList(Node* headNode) {
        Node* curr = headNode;
        Node* prev = NULL;
        Node* nextNode = NULL;

        while (curr != NULL) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
};

int main() {
    LinkedList l;
    l.push_front(5);
    l.push_front(4);
    l.push_back(3);
    l.push_back(2);
    l.pop_front();

    cout << "Linked List: ";
    l.print();
    cout << endl;

    // int result = l.sum_ll();
    // double avg_result = l.avg_ll();
    // int large_val = l.largest();
    // int small_val = l.smallest();
    // int total_nodes = l.count();

    // cout << "Sum: " << result << endl;
    // cout << "Average: " << avg_result << endl;
    // cout << "Largest: " << large_val << endl;
    // cout << "Smallest: " << small_val << endl;
    // cout << "Total no. of Nodes: " << total_nodes << endl;

    return 0;
}
