/**
Runtime:0ms
Beats:100.00%




 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    * returnSize= numsSize;
    int* a=(int*)malloc((numsSize)*sizeof(int));
    int* b=(int*)malloc((numsSize)*sizeof(int));
    int* ans=(int*)malloc((* returnSize)*sizeof(int));
a[0]=0;
    for(int i=0;i< numsSize-1;i++){
      a[i+1]=a[i]+nums[i];
       }
    b[numsSize-1]=0;
    for(int i=numsSize-1;i>0;i--){
      b[i-1]=b[i]+nums[i];
       }
    for(int i=0;i<numsSize;i++){
        int y=a[i]-b[i];
        if(y<0){
            y=y*(-1);
        }
        ans[i]=y;
    }return ans;
}