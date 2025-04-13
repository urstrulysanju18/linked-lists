#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode* prev;

    ListNode(){
        val=0;
        next=NULL;
        prev=NULL;
    }

    ListNode(int val){
        this->val=val;
        next=NULL;
        prev=NULL;
    }

    ListNode(int val, ListNode* next, ListNode* prev){
        this->val=val;
        next=next;
        prev=prev;
    }
};

class Dcl{
    public:
    ListNode* head;

    Dcl(){
        head=NULL;
    }

    void insert(int val){
        ListNode* newNode=new ListNode(val);
        if(!head){
            head=newNode;
            head->prev=head;
            head->next=head;
            return;
        }
        ListNode* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        newNode->prev=temp;
        newNode->next=head;
        temp->next=newNode;
        head->prev=newNode;
    }

    void Delete(){
        ListNode* temp=head;
        while(temp->next->next!=head){
            temp=temp->next;
        }
        temp->next->prev=NULL;
        temp->next->next=NULL;
        temp->next=head;
        head->prev=temp;
    }

    void display(){
        ListNode* temp=head;
        bool start=true;
        while(start || head!=temp){
            start=false;
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
int main() {
    Dcl list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);

    list.Delete();

    list.display();
}