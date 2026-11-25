#include<iostream>
using namespace std;

//Doubly linked list

class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int value){
        data=value;
        next=prev=NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;
public:
    DoublyList(){
        head=tail=NULL;
    }



    //adding an elemnt at the start of doubly linked list

    void push_front(int value){
        Node* newNode = new Node(value);

        if(head == NULL){   // if the linklist is empty
            head = tail = newNode;     
        }
        else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }

    
    //print function for the duubly linked list
    void print(){

        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" <-> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    //adding an element at the end of doubly linked list
    void push_back(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = tail = newNode;
        }
        else{             // fi the dll had soem previous elements
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }
    }


    //deleting the ehad element from the doubly linked list
    void pop_front(){
        if(head == NULL){           // if the linklist is empty
            cout<<"DLL is empty"<<endl;
            return;
        }
        else if(head == tail){   // if there is only one element in the dll
            delete head;
            head=tail=NULL;
        }
        else{
            Node* temp=head;      // storing the address of head in temp pointer to delete it later
            head=head->next;     
            head->prev=NULL;
            temp->next=NULL;      // breaking the link of temp pointer with the list
            delete temp;           //deleting that node from memory
        }
    } 

    //delete an element from the end of the doubly linked list
    void pop_back(){
        if(head == NULL){           // if the linklist is empty
            cout<<"DLL is empty"<<endl;
            return;
        }
        else if(head == tail){   // if there is only one element in the dll
            delete head;
            head=tail=NULL;
        }
        else{
            Node* temp=tail;      // storing the address of tail in temp pointer to delete it later
            tail=tail->prev;     
            tail->next=NULL;
            temp->prev=NULL;      // breaking the link of temp pointer with the list
            delete temp;           //deleting that node from memory
        }
    }

};

int main(){

    DoublyList dll;

    dll.push_front(10);
    dll.push_front(20);
    dll.print();
    dll.push_back(30);
    dll.print();

    dll.pop_back();
    dll.print();

    return 0;
}