/*problem link  =  https://leetcode.com/problems/minimum-absolute-difference-between-two-values/submissions/1961864322

i am use count because when no pair exits then count =0 then output is -1

i take min=101 because in the question mention nums[i]<=100

*/


int minAbsoluteDifference(int* nums, int numsSize) {

int p=-1,j=-1,t=101,min=101,count=0;

    for(int i=0;i<numsSize;i++) {
        
        if(nums[i]==1){
            p=i;
        }
        if(nums[i]==2){
            j=i;
        }
        if(p!=-1 &&j!=-1 ){
            if(p>j){
                 t=p-j;
            }else{
                t=j-p;
            }
            count=1;
            
        }
        if(min>t){
            min=t;
            
        }
        
    }if(count){
        return min;
    }return -1;
}