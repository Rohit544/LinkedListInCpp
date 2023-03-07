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

    //now we have to print the linked list
    void printList(Node* &head){
        Node* temp = head;
        //now from while loop
        while(temp != NULL){
            //print the val of temp
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;

        return;
    }

    int main(){

        //this part is using by heap
        //created a new node 
        Node* node1 = new Node(10);
        // cout<<node1->data<<endl;
        // cout<<node1->next<<endl;
        
        //now head pointed to node first
        Node* head = node1;
       
        insertAtHead(head,12); //this function is use to print the value of 
        printList(head); //and then we have to print the head on the top of the linked list


        return 0;
    
    }