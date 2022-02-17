

//暴力解法超出时间限制
int maxSubArray(int* nums, int numsSize){
    int cur,max=nums[0];
    if (numsSize==1)
        return max;
    else{
        for(int i=0;i<numsSize;++i){
            cur=nums[i];
            if (cur>max)
                    max=cur;
            for(int j=i+1;j<numsSize;++j){
                if(j==numsSize)
                    break;
                cur+=nums[j];
                if (cur>max)
                    max=cur;
            }
        }
    }
    return max;
}