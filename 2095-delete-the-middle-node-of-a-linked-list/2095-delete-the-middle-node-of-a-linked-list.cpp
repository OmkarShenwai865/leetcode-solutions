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
// int LenofLL(ListNode* head){
//     ListNode* temp = head;
//     int cnt=0;
//     while(temp!=NULL){
//         cnt++;
//         temp = temp->next;
//     }
//     return cnt;
// }
    ListNode* deleteMiddle(ListNode* head) {
if(head==NULL || head->next==NULL){
    return NULL;
}       
// ListNode* temp = head;
// int n = LenofLL(head);
// int cnt=0;
// ListNode* prev = NULL;
// while(temp!=NULL){
// cnt++;
// if(cnt == (n/2)+1){
// prev->next = temp->next;
// temp->next=NULL;
// delete temp;
// break;
// }
// prev = temp;
// temp = temp->next;
// }
// return head;

//2nd Method(slow and fast pointers)
ListNode* first = head;
ListNode* second = head;
ListNode* prev = NULL;

while(second!=NULL && second->next!=NULL){
    prev = first;
    first= first->next;
    second = second->next->next;
}
prev->next = first->next;
first->next = NULL;
delete first;
return head;
    }
};