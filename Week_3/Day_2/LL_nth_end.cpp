#include<bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        if(head==NULL){
            return head;
        }
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        
        int node=l-n+1;
        int i=1;
        if(node==1){
            return head->next;
        }
         temp=head;
        
        while(i<node-1){
            temp=temp->next;
            i++;
        }
        
        if(temp->next!=NULL){
            temp->next=temp->next->next;
        }
        else{
            temp->next=NULL;
        }
        
        return head;
    }