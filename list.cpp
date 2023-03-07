//implemantation of linked list
#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;   //this is the data of the node
        Node* next;  //and this is the address of the node
        
        //by the method of construcutor 
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};


    int insertAtHead(Node* &head,int d){
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;

        return 0;
    }

    int insertAtTail(Node* &tail,int d){

        Node* temp = new Node(d);
        tail->next = temp;
        tail = tail->next;

        return 0;
    }


    //now we have to print the linked list
    void printList(Node* &head){
         Node* temp = head;
         //while loop 
         while(temp != NULL)
         {
            cout<<temp->data<<" ";
            temp = temp->next;
         }
         cout<<endl;
    }

    int main(){

        //this part is using by heap

        Node* node1 = new Node(10);
        // cout<<node1->data<<endl;
        // cout<<node1->next<<endl;
        Node* head = node1;
        Node* tail = node1;
        insertAtTail(tail,12);
        printList(head);

        return 0;
    
    }