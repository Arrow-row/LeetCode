#include <stdio.h>
#include <stdlib.h>

/* 暴力枚举 */

int* twoSum(int* arr, int len, int target){
	for (int i = 0; i < len; i++)		 //arr中必有两数和为target，故i最大必定只会取到len-2，这里范围限制为len没有问题
					      	 //准确的应写为 i < len-1
		for (int j = i+1; j < len; j++)
			if (arr[i] + arr[j] == target){
				int* res = malloc(sizeof(int)*2);
				res[0] = i, res[1] = j;
				return res;
			}
	return NULL;

}


/* 哈希表 */

int* twoSum_HashMap(){

}



int main(){
	int arr[] = {3,2,4};
	int len = 3, target = 6;
	int* res = twoSum(arr, len, target);
	printf("[%d,%d]",res[0],res[1]);
	return 0;
}
