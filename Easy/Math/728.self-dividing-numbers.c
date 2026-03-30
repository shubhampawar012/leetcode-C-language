/*  question link:https://leetcode.com/problems/self-dividing-numbers/submissions/1963863135

runtime:0ms
beats:100%

 logic : we use right-left+1  this because we don't know return array size we take maximum possible ,it will right-left+1  and we add 1 because diference not count self number 
-for finding digit we only take modulo with 10
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
  
int* ans = (int*)malloc((right-left+1)* sizeof(int));  

int t=0;
    for(int i=left;i<=right;i++){
          int actualno=i,j,count=1;
        for(j=0;actualno>0;j++){
             int ld=actualno%10;
            actualno/=10;
            if(ld==0||i%ld!=0){       //if ld=0 then we take modulo with i ,then it goes to infinity    means not divisible 
               count=0;
               break;
            }
            }
            if(count){            // count==1 and only count is same 
                ans[t]=i;
                t++;
            }

        
    }
    *returnSize=t;         
    return ans;
}
