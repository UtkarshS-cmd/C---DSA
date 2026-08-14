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
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    int evenElements(){
        Node* temp = head;
        int cnt = 0;
        while (temp != nullptr) {
            if(temp->data % 2 == 0){
            cnt++;
            }
            temp = temp->next;
        }
        return cnt;
    }

    int oddElements(){
        Node* temp = head;

        int cnt = 0;
        while (temp != nullptr) {
            if(temp->data % 2 != 0){
            cnt++;
            }
          temp = temp->next;
        }
        return cnt;
    }

    int positiveElements(){
        Node* temp = head;

        int cnt = 0;
        while (temp != nullptr) {
            if(temp->data > 0){
            cnt++;
            }
          temp = temp->next;
        }
        return cnt;
    }

    int negetiveElements(){
        Node* temp = head;

        int cnt = 0;
        while (temp != nullptr) {
            if(temp->data < 0){
            cnt++;
            }
          temp = temp->next;
        }
        return cnt;
    }

      int zeroElements(){
        Node* temp = head;

        int cnt = 0;
        while (temp != nullptr) {
            if(temp->data == 0){
            cnt++;
            }
          temp = temp->next;
        }
        return cnt;
    }

    int secondLargest(){
       int maxEle = INT_MIN;
       int secondMax = INT_MIN;
        Node* temp = head;
        
        while(temp != NULL){
        if (temp->data > maxEle) {
            secondMax = maxEle;
            maxEle = temp->data;
        } else if (temp->data > secondMax && temp->data != maxEle) {
            secondMax = temp->data;
        }
        temp = temp->next;
    }
    }

    int secondSmallest() {
        int minEle = INT_MAX;
        int secondMin = INT_MAX;
        Node* temp = head;
        
        while(temp != NULL){
        if (temp->data < minEle){
            secondMin = minEle;
            minEle = temp->data;
        } else if (temp->data < secondMin && temp->data != minEle) {
            secondMin = temp->data;
        }
        temp = temp->next;
}

    int countOccurence(int val){
        int cnt = 0;

        while (temp != nullptr) {
            if(temp->data == val){
            cnt++;
            }
          temp = temp->next;
        }
    return cnt;
}

string countOccurence(int val){
        int cnt = 0;

        while (temp != nullptr) {
            if(temp->data == val){
                return "Element Exists"
            }
          temp = temp->next;
        }
    return "Element Does not exist";
}

// First occurence and last occurence pe indexing
   int firstOccurence(int val){
        int cnt = 0;

        while (temp != nullptr) {
            if(temp->data == val){
            cnt++;
            }
          temp = temp->next;
        }
    return cnt;
} 

    int lastOccurence(int val){
        int cnt = 0;

        while (temp != nullptr) {
            if(temp->data == val){
            cnt++;
            }
          temp = temp->next;
        }
    return cnt;
}

int greaterThan(int val){
    int cnt = 0;

    while (temp != nullptr) {
            if(temp->data > val){
                cnt++;
            }
          temp = temp->next;
        }
    return cnt;
}

int lessThanAvgVal(int val){
    int cnt = 0;

     Node* temp = head;
        int count = 0;
        int sum = 0;
        while (temp != NULL) {
            sum += temp->data;
            count++;
            temp = temp->next;
        }
        avg = (float)sum/count;

    while (temp != nullptr) {
            if(temp->data < avg ){
                cnt++;
            }
          temp = temp->next;
        }
    return cnt;
}

Node *reverseList(Node *head) {

    Node *curr = head, *prev = nullptr, *next;

    while (curr != nullptr) {

        // Store next
        next = curr->next;

        // Reverse current node's next pointer
        curr->next = prev;

        // Move pointers one position ahead
        prev = curr;
        curr = next;
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
    
    cout << "Linked List: ";
    l.print();
    cout << endl;

    int result = l.sum_ll();
    double avg_result = l.avg_ll();
    int large_val = l.largest();
    int small_val = l.smallest();
    int total_nodes = l.count();

    cout << "Sum: " << result << endl;
    cout << "Average: " << avg_result << endl;
    cout << "Largest: " << large_val << endl;
    cout << "Smallest: " << small_val << endl;
    cout << "Total no. of Nodes: " << total_nodes << endl;

    return 0;
}
};
