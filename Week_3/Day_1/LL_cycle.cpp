#include <bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

    bool hasCycle(ListNode *head) {
        ListNode *prev=head;
        
        if(head==NULL){
            return false;
        }
        ListNode *curr=head->next;
        while(prev!=curr && curr!=NULL){
            prev=prev->next;
            if(curr->next!=NULL){
            curr=curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        if(prev==curr){
            return true;
        }
        else{
            return false;
        }
    }