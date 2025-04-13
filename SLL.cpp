#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:

    int val;
    ListNode* next;

    ListNode(){
        val=0;
        next=NULL;
    }
    ListNode(int val){
        this->val=val;
        next=NULL;
    }
    ListNode(int val, ListNode* next){
        this->val=val;
        next=next;
    }
};

class LinkedList{
    public:
    ListNode* head=NULL;

    // LinkedList(){
    //     head=NULL;
    // }

    // Insert
    void insert(int val){
        ListNode* newNode=new ListNode(val);
        if(!head){
            head=newNode;
            return;
        }
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

    // Delete
    void Delete(){
        ListNode* temp=head;
        while(temp->next->next){
            temp=temp->next;
        }
        temp->next=NULL;
    }

    void print(){
        ListNode* temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);

    list.Delete();

    list.print();    
}