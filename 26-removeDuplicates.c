//删除重复元素
//快慢指针法


#include <stdio.h>

int removeDuplicates(int *nums,int numsSize){
	if (numsSize==0)
		return 0;
	int slow=1;
	for(int fast=1;fast<numsSize;++fast){
		if(nums[fast]!=nums[fast-1]){
			nums[slow]=nums[fast];
			++slow;
		}
	}
	return slow;

}

int main(){
	int nums[]={0,0,1,1,1,2,2,3,3,4};
	int numsSize=10,k;
	k=removeDuplicates(nums,numsSize);
	printf("新数组长度为：%d\n新数组为：",k);
	for(int i=0;i<k;++i)
		printf("%d ",nums[i]);

}
