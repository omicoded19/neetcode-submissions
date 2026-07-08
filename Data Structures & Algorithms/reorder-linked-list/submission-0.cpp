/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        //pehli condition // 1-2-3-4-5
        if(head==NULL || head->next==NULL) return;
        // is question main hum list ko half kr denge aur second part 
        // ko doosre m merge kr denge alternatively
        // now to find middle
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next; // isse slow pointer middle ko point krega ie 3
        }
        // since middle aa gya hai we want two seperate lists 
        // so middle k next se doosri list banayenge
        ListNode* second=slow->next; // 1-2-3 and 4-5
        slow->next=NULL; 
        // ab hum second half ko reverse krenge coz we want 1-5-2-4-3 not 1-4-2-5-3
        ListNode* prev=NULL;
        while(second){ // isse second half reverse ho jayegi
            ListNode* front=second->next;
            second->next=prev;
            prev=second;
            second=front;
        }
        // now time to merge
        ListNode* first=head;
        second=prev;
        while(second){
            ListNode* temp1=first->next;
            ListNode* temp2=second->next;
            first->next=second;
            second->next=temp1;

            first=temp1;
            second=temp2;
        }
        
    }
};
