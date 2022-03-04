/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//递归

struct ListNode* removeElements(struct ListNode* head, int val){
    if(head==NULL)
        return head;
    else if(head->val == val){
        head=removeElements(head->next,val);
        //return head;  //这两个return用最后一个代替
    }
    else{
        head->next = removeElements(head->next,val);
        //return head;
    }
    return head;
}