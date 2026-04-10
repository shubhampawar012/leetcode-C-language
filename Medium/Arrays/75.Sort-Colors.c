/* link :https://leetcode.com/problems/sort-colors/submissions/1974540764

Runtime:0ms
Beats:100.00%

*/

void sortColors(int* nums, int numsSize) {
    int a=0,b=0,c=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0){                // count number of of zero
            a++;
        }else if(nums[i]==1){             // count number of of one
            b++;
        }else{                          // count number of of two
            c++;
        }
}
for(int i=0;i<a;i++){      //fill 1st 0 then 1 then 2
    nums[i]=0;
}
for(int i=a;i<b+a;i++){
    nums[i]=1;
}
for(int i=b+a;i<a+b+c;i++){
    nums[i]=2;
}
}