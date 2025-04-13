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

class Scl{
    public:
    ListNode* head;

    Scl(){
        head=NULL;
    }

    void insert(int val){
        ListNode* newNode=new ListNode(val);
        if(!head){
            head=newNode;
            head->next=head;
            return;
        }
        ListNode* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
    }

    void Delete(){
        ListNode* temp=head;
        while(temp->next->next!=head){
            temp=temp->next;
        }
        temp->next->next=NULL;
        temp->next=head;
    }

    void display(){
        ListNode* temp=head;
        bool start=true;
        while(start || temp!=head){
            start=false;
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
int main() {
    Scl list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);

    list.Delete();

    list.display();
}