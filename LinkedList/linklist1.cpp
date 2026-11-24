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
        else{
            newNode->next = head;   // first assigning the address of head to next of newnode pointer
            head = newNode;          //then reassigning the head pointer to newnode
            tail->next = head;       // making the circular link


            //without using head
            //newNode->next = tail->next;
            //tail->next = newNode;
        }
    }



    //insertig a new element at the tail of the circular linked list
    void push_back(int value){
        Node* newNode = new Node(value);

        if(head  == NULL){              // ll is empty initially
            head = tail = newNode;
            tail->next  = head;   // making the circular link
        }
        else{
            newNode->next = head;  
            tail->next = newNode;     // assigining the value of newnode to the next of tail
            tail = newNode;          // then reassigining the tail pointer to new node
        }
    }

    void printLL(){
        Node* temp = head;
        if(head == NULL){
            cout<<"LL is empty"<<endl;
            return;
        }
        do{
            cout<<temp->data<<"->";
            temp = temp->next;
        }while(temp != head);
        cout<<"HEAD"<<endl;
    }



    //deleting an element from the head of the circular linked list
    void pop_front(){
        if(head == NULL){
            cout<<"LL is empty"<<endl;
            return;
        }
        else if(head == tail){
            delete head;
            head = tail = NULL;
        }
        Node* temp = head;      // storing the address of head in temp pointer to delete it later
        head = head->next;     
        tail->next = head;
        temp->next = NULL;      // breaking the link of temp pointer with the list
        delete temp;           //deleting that node from memory
    }

    
    //deleting an element from the tail of the circular linked list
    void pop_back(){
        if(head == NULL){
            cout<<"LL is empty"<<endl;
            return;
        }
        else if(head == tail){
            delete head;
            head = tail = NULL;
        }
        else{
            Node* temp = tail;      // storing the address of tail in temp pointer to delete it later

            Node* prev = head;      // storing the address of head in temp pointer to traverse the list
            while(prev->next != tail){   // traversing the list to reach the previous node of tail
                prev = prev->next;
            }
            tail=prev;          // reassigning the tail pointer to previous node
            tail->next = head;  // making the circular link

            temp->next = NULL;  // breaking the link of temp pointer with the list
            delete temp;        //deleting that node from memory
        }
    }


};



int main(){
    CircularList ll;

    ll.push_front(1);
    ll.push_front(2);   
    ll.push_front(3);

    ll.printLL();    //3->2->1->HEAD

    ll.push_back(4);
    ll.printLL();    //3->2->1->4->HEAD

    ll.pop_front();
    ll.printLL();    //2->1->4->HEAD

    ll.pop_back();
    ll.printLL();    //2->1->HEAD

    return 0;
}