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
       int c=0;
        ListNode *temp=head;
        while(temp->next!=NULL)
        {
            c++;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<c/2;i++)
        {
            temp=temp->next;
        }
        ListNode *mid=temp;
        ListNode *second=mid->next;
        mid->next=NULL;
        ListNode *prev=NULL;
        ListNode *curr=second;
        ListNode *Next=NULL;
        while(curr!=NULL)
        {
            Next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=Next;
        }
        second=prev;
        temp=head;

        while(second!=NULL)
        {
            ListNode *firstnext=temp->next;
            ListNode *secondnext=second->next;

            temp->next=second;
            second->next=firstnext;
            
            temp=firstnext;
            second=secondnext;
        }
    }
};