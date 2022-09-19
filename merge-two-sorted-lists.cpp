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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL)return NULL;
        if(list1==NULL)return list2;
        if(list2==NULL)return list1;
        ListNode* ptr1;
        ListNode* ptr2;
        if(list1->val>=list2->val){
            ptr1=list2;ptr2=list1;
        }
        else{
            ptr1=list1;ptr2=list2;
        }
        
        while(ptr1!=NULL&& ptr2!=NULL){
            if(ptr1->next==NULL)break;
            if(ptr1->next->val >= ptr2->val){
                ListNode* p=ptr2->next;
                ptr2->next=ptr1->next;
                ptr1->next=ptr2;
                ptr1=ptr2;
                ptr2=p;
            }
            else{
                ptr1=ptr1->next;
            }
        }
        if(ptr1->next==NULL){
                ptr1->next=ptr2;
        }
        if(list1->val>=list2->val){
            return list2;
        }
        return list1;
    }
};
