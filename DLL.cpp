#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode* prev;

    ListNode(){
        val=0;
        next=nullptr;
        prev=nullptr;
    }

    ListNode(int val){
        this->val = val;
        next = nullptr;
        prev = nullptr;
    }

    ListNode(int val, ListNode* next, ListNode* prev){
        this->val=val;
        next=next;
        prev=prev;
    }
};

class Dll{
    public:

    ListNode* head;

    Dll(){
        head=NULL;
    }

    void insert(int val){
        ListNode* newNode=new ListNode(val);
        if(!head){
            head=newNode;
            return;
        }
        ListNode* temp=head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
    }

    void Delete(){
        ListNode* temp=head;
        while(temp->next->next){
            temp=temp->next;
        }
        temp->next->prev=NULL;
        temp->next=NULL;
    }

    void display(){
        ListNode* temp=head;
        while(temp->next){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
int main() {
    Dll list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);

    list.Delete();

    list.display();
}