//反转字符串

void reverseString(char* s, int sSize){
    int left=0,right=sSize-1,tmp;
    while(left <right){
        tmp=s[left];
        s[left]=s[right];
        s[right]=tmp;
        left++;
        right--;
    }
    return s;
}