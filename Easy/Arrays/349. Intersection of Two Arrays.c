/*
https://leetcode.com/problems/intersection-of-two-arrays/submissions/1963168129

Runtime:1ms
Beats:45.65%*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
   *returnSize=nums1Size;
    int* ans=(int*)malloc((* returnSize)*sizeof(int));
int a=0;
    for(int i=0;i<nums1Size;i++){
       int p=0;
        for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                p=1;                 //here we not use ans[a]=nums1[i];  because when 
                break;                     // same element are occur multiple time in ans
                                       // array this store multiple time 
            }
        }
        if(p){ 
            int count=1;
            for(int y=0;y<a;y++){                    //this loop require  for this tastecase
                                          /*nums1 =
                                            [1,2,2,14,3,4,3,5,2,7,5,4,3,3,4,5,4]
                                            nums2 =
                                                [2,2,2,3,4,5,6,5,4,3,5,6,4,3,4,3]
                                            Output
                                                [2,3,4,5]
                                                Expected
                                                [2,3,4,5]   */
                if(nums1[i]==ans[y]){
                    count=0;
                    break;
                }
            }if(count){
                ans[a]=nums1[i];
                    a++;
            }
                                    //a   is the size of ans array
        }
    }
    *returnSize=a;
return ans;
}