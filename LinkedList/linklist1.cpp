#include<iostream>
using namespace std;

//circular linked list

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};


class CircularList{
    Node* head;
    Node* tail;

public:
    CircularList(){
        tail=head=NULL;
    }


    //inserting a element at the head of the circular linked list
    void push_front(int value){
        Node* newNode = new Node(value);

        if(head  == NULL){              // ll is empty initially
            head = tail = newNode;
            tail->next  = head;   // making the circular link
        }
    }
};



int main(){
    CircularList ll;

    return 0;
}