#include<bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        int l=0;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        if(l==1){
            return true;
        }
        
        int s1=0;
        int s2=0;
         temp=head;
         if(l==2 && temp->val==temp->next->val){
            return true;
         }
         
        if(l%2!=0){
           int n=l/2;
            int i=1;
           while(i<n){
            temp=temp->next;
            i++;
           }
           temp=temp->next;
           ListNode* curr=temp;
           ListNode* prev=NULL;
           while(curr!=NULL){
            ListNode* node=curr->next;
            curr->next=prev;
            prev=curr;
            curr=node;
           }
            temp=head;
           while(prev!=NULL){
            if(temp->val !=prev->val){
                return false;
            }
            temp=temp->next;
            prev=prev->next;
           }
        }
        else{
            int n=l/2;
            int i=1;
           while(i<=n){
            temp=temp->next;
            i++;
           }
           ListNode* curr=temp;
           ListNode* prev=NULL;
           while(curr!=NULL){
            ListNode* node=curr->next;
            curr->next=prev;
            prev=curr;
            curr=node;
           }
            temp=head;
           while(prev!=NULL){
            if(temp->val !=prev->val){
                return false;
            }
            temp=temp->next;
            prev=prev->next;
        }
        }
        return true;
    }