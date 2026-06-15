 #include<bits/stdc++.h>
 using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  
 ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        int c=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            c++;
        }
        if(c%2==0){
            c=(c/2)+1;
        }
        else{
            c=(c+1)/2;
        }
        int i=1;
        temp=head;
        while(i<c){
          temp=temp->next;
          i++;
        }
        return temp;

    }