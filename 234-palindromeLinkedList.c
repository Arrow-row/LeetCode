/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



/**
//将链表复制到数组中，用双指针
bool isPalindrome(struct ListNode* head){
    int arr[100001],nums=0;
    while(head != NULL){    //复制链表节点值到数组中，nums用做数组下标并计数
        arr[nums++]=head->val;
        head=head->next;
    }
    for (int i=0,j=nums-1;i<j;i++,j--){ //用j=nums出错，上面的nums使用后就+1了
        if(arr[i]!=arr[j])  //用arr[i]==arr[j]不便于判断回文特性
            return false;
    }
    return true;
}
*/