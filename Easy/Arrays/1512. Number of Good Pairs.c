
/*
https://leetcode.com/problems/number-of-good-pairs/submissions/1963128031

Runtime :0 ms
Beats:100.00%
*/


int numIdenticalPairs(int* nums, int numsSize) {
int sum=0;
   for(int i=0;i<numsSize;i++){

    for(int j=i+1;j<numsSize;j++){
           if(nums[i]==nums[j]){
            sum++;
           }
    }
   } return sum;
}