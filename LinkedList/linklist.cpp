#include<iostream>
using namespace std;

//Singly linked list and its operations(pushfront,pushback,insertAt,push_back,push_front,search,searchRec,deleteNthNode)
//it is a liner data strcture just like array and vectors
//but the memory stored is not continous 
// every node is made of 2 parts (data,address of next node)
//this address can be non continous
//NODE(  data[int] , NODE*[ptr]  )
// a special head pointer that points towards 1st node
// a special tail pointer that points towards last pointer
//if we want to get data of nth node then , we must traverse from head only



//Implimentation of linked list 


//creating our node
class Node{

public:
    int data;            // our node data part which is integer
    Node* next;          // our node address part whcih is pointer

    Node(int value){      
        data = value;  
        next = NULL;
    }

    ~Node(){          // destructor of node class   , deleting dynamically allocated memory
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};


//creating list which contains multiple nodes
class List{
    Node* head;
    Node* tail;
    public:
    List(){          //constructor of list class
        head = tail = NULL;    //initializing head and tail with NULL initially
    }

    ~List(){              // destructor of list class ,    deleting dynamically allocated memory
        if(head == NULL){
            delete head;
            head = NULL;
        }
    }


    //adding a new element int the start/front of the list
    void push_front(int value){
        Node* newNode = new Node(value);   // dynamically creating newnode and calling constructor of node class to initialize data and next pointer

        //checking if ll is empty
        if(head == NULL){
            head = tail = newNode;
        }
        else{          // ll is not empty
            newNode->next = head ;         // first assigning the address of head to next of newnode pointer
            head = newNode;                 //then reassigning the head pointer to newnode
        }
        
    }


    //adding a element at the end of the list
    void push_back(int value){
        Node* newnode = new Node(value);
    

        if(head == NULL){            // checking if the ll is empty
            head = tail = newnode;
        }
        else{  
            tail->next = newnode;     // assigining the value of newnode to the next of tail
            tail = newnode;          // then reassigining the tail pointer to new node
        }
    }



    // printing the ll using temp variable
    void printLL(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    }


    //inserting a new node at in middle of the list

    void insertAt(int val , int pos){

        Node* newnode = new Node(val);   // creating new node

        Node* temp = head;                 // creating a temp pointer to traverse the list
        for(int i=0;i<pos-1;i++){          // traversing the list
            temp = temp->next;
        }

        // now our temp pointer is at the position where we want to insert the new node

        newnode->next = temp->next;   // assigning the address of next node to the next of newnode
        temp->next = newnode;          // assigning the address of newnode to the next of temp pointer

    }


    //deleting a node from the front
    void pop_front(){
        if (head == NULL)
        {
            cout<<"LL is empty"<<endl;
        }
        
        Node*temp = head;
        head =  head->next;  // implimented
        temp->next= NULL;
        delete temp;          // clearing from memory
    }

    //deleting an element from the end
    void pop_back(){
        Node* temp = head;
        while(temp->next->next != NULL){       // finding tail's previous element
            temp=temp->next;
        }
        temp->next=NULL;        
        delete tail;
        temp=tail;
    }



    //iterative search in link list
    int search(int key){
        Node* temp = head;
        int idx=0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }





    //recursive search in linked list

    int helper(Node* temp,int key){            // helper function

        if(temp->next == NULL){
            return -1;
        }
        if(temp->data == key){
            return 0;
        }
        int idx = helper(temp->next,key);
        if(idx == -1){
            return -1;
        }
        else{
            return idx + 1;
        }
    }

    int searchRec(int key){
        return helper(head,key);
    }





    //Find and delete nth node from the end of the linked list
    void deleteNthNode(int n){

        //first calculate the length of the linked list
        int size = 0;
        Node* temp = head;

        while(temp != NULL){
            size++;
            temp = temp->next;
        }

        //now we will reach upto nth node to delete from front
        Node* prev = head;

        for(int i = 1; i < size-n; i++){
            //this prev pointer stops at delete node's previous node
            prev = prev->next;
        }

        Node* toDelete = prev->next;   //this is the node which we want to delete

        cout<<"Deleted node is : "<<toDelete->data<<endl;

        prev->next = toDelete->next;   //now we are skipping the delete node

    }

};



int main(){

    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    //1->2->3->NULL

    ll.printLL();

    ll.push_back(4);
    ll.push_back(5);

    ll.printLL();
    //1->2->3->4->5->NULL

    ll.insertAt(10,3);  //inserting 10 at position 3
    ll.printLL();

    cout<<ll.search(4)<<endl;
    cout<<ll.searchRec(10)<<endl;

    ll.deleteNthNode(3);
    ll.printLL();

    return 0;
}