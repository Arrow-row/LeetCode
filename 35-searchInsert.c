int searchInsert(int* nums, int numsSize, int target){
    int left=0,right=numsSize-1,mid;
    while(left<=right){
        if(target<nums[0])  //处理边界值
            return 0;
        if(target>nums[numsSize-1]) //处理边界值
            return numsSize;
        mid=(left+right)/2; //二分法找到target最近的mid
                            //如果target==nums[mid],返回mid,否则返回left()
                            //主要理解下插入位置是left+1的地方，与right关系不大

        if(nums[mid]<target){
            left=mid+1;
            if(left>right)
                return left;}
        else if(nums[mid]>target){
            right=mid-1;
            if(left>right)
                return left;} //这里不能写成return right;
        else 
            return mid;

    }
    return 0;