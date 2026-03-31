/*   link :https://leetcode.com/problems/two-sum/submissions/1965191801

Runtime:91ms
Beats:84.87%



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
     * returnSize=2;
    int* ans = (int*)malloc((* returnSize) * sizeof(int));
int temp=0;
    for(int i=0;i<numsSize-1;i++){

      for(int j=i+1;j<numsSize;j++){
        if(nums[i]+nums[j]==target){
          ans[0]=i;
          ans[1]=j;
           temp=1;
          break;       // 1 break statement only cut 1 loop 
        }if(temp) break;     //if we not use break here then loop not stop if target is found 
      }
    }return ans;
}