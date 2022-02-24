#include <stdio.h>

//动态规划方法
int maxSubArray(int* nums, int numsSize){
    int dp[numsSize];      //结果数组长度默认为求解数组长度，空间复杂度O(n)
        dp[0]=nums[0];
    for(int i=1;i<numsSize;i++){    //只需要遍历一次，时间复杂度O(n)
        if(dp[i-1]<=0)
            dp[i]=nums[i];
        else
            dp[i]=nums[i]+dp[i-1];
        }
    
    for(int i=1;i<numsSize;i++){    //求结果数组dp[numsSize]中的最大值
        //printf("%d ",dp[i] );
        if(dp[i]>dp[0])
            dp[0]=dp[i];
    }
    printf("%d\n", dp[0]); 
}

int main(int argc, char const *argv[])
{
    int nums[]={-2,1,-3,4,-1,2,1,-5,4},numsSize=9;
    maxSubArray(nums,numsSize);
    return 0;
}



//暴力解法超出时间限制
/*
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
*/