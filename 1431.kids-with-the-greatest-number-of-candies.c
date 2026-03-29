/*
 * @lc app=leetcode id=1431 lang=c
 *
 * [1431] Kids With the Greatest Number of Candies
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdbool.h>             // we need add this else code not work in c language
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    
  * returnSize=candiesSize;
  bool* result=(bool*)malloc((*returnSize)*sizeof(bool))  ;  //create memory for result array
int max=-1000;
  for(int i=0;i<candiesSize;i++){
    if(max<candies[i]){              //find max
        max=candies[i];
    }
     }
     for(int i=0;i<candiesSize;i++){        
    if(max<=candies[i]+extraCandies){
        result[i]=true;                 
    }
    else{
        result[i]=false;    //this is bool means do not add single   ex='false'
    }
    }
     return result;
}
// @lc code=end

