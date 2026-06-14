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
    ListNode* reverseLL(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp!=NULL){
        ListNode* nextnode = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nextnode;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        int n = 0;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        temp = head;
        ListNode* test = head;
        while(test!=NULL && test->next!=NULL){
            temp = temp->next;
            test = test->next->next;
        }
    ListNode* newnode = reverseLL(temp);
    ListNode* first = head;
    ListNode* second = newnode;
    int maxi = INT_MIN;
    while(second!=NULL){
        int sum=0;
        sum = first->val + second->val;
        maxi = max(sum,maxi);
        
        first=first->next;
        second=second->next;
    }
    return maxi;
    }
};