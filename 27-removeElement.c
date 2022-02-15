#include <stdio.h>


int removeElement_2(int* nums, int numsSize, int val){         
	int slow=0;//可以覆盖的位置         
	int fast=0;//搜索指针
	while(fast<numsSize){
		if(nums[fast]!=val){
			nums[slow]=nums[fast];
                      	++slow;
		}
		++fast;
	}
	return slow;
}


int main(){
	int nums[]={0,1,2,2,3,0,4,2};
	int numsSize=8,val=2;
	int len=removeElement_2(nums,numsSize,val);
	printf("len=%d\nnums=",len);
	for(int i=0;i<numsSize;++i){
		printf("%d ",nums[i]);
	}
	return 0;
}
