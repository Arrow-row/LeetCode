#include <stdio.h>

//双指针
//最坏情况下（输入数组中没有元素等于val），左右指针各遍历了数组一次
int removeElement_1(int* nums, int numsSize, int val){         
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


//双指针优化
//两个指针在最坏情况下合起来只遍历数组一次
int removeElement_2(int* nums, int numsSize, int val){
	int left=0,right=numsSize;
	while(left<right){		//left和right重合时，左右指针遍历完数组中所有元素	
		if (nums[left]==val){	//若nums[left]==val，则将right指向的元素左值到左边，right--，直到复制过来的元素不等于val为止
			nums[left]=nums[right-1];
			right--;
		}
		else
			left++;
	}
	return left;
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
