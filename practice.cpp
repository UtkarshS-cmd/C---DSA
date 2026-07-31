#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class List{
    public:
        Node* head;
        Node* tail;

    List(){
    head = tail = nullptr;
    }
};

int insert(int val){

    Node* head = new Node(4); 
    Node* newNode = new Node(2);
    Node* tail = nullptr;

    if(head == NULL){
        head = tail = newNode;
    }
    else{
        head->next = newNode;
        head = newNode;
    }
}

int main(){

return 0;
}