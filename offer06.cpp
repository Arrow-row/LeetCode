/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


//方法一：先反转链表，再遍历，这样就不需要额外的栈空间开销
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> res;
        //空链表直接返回res
        if(head==nullptr) 
            return res;
        //反转链表
        ListNode *curr=head->next;
        ListNode *temp;
        head->next=nullptr;
        while(curr){
            temp=curr->next;
            curr->next=head;
            head=curr;
            curr=temp;
        }
        //取链表中的值
        while(head){
            res.push_back(head->val);
            head=head->next;
        }
        return res;
    }
};


//方法二：使用栈
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> res;
        stack<int> temp;
        if(head==nullptr)   return res;
        //链表元素入栈
        while(head){
            temp.push(head->val);
            head=head->next;
        }
        //栈内元素出栈存到数组中
        while(!temp.empty()){
            res.push_back(temp.top());
            temp.pop();
        }
        return res;
    }
};