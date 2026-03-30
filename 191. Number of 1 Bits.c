/*
https://leetcode.com/problems/number-of-1-bits/submissions/1963614595

Runtime:0ms
Beats:100.00%
*/


int hammingWeight(int n) {
  
int count=0;
    for(int i=0;n>0;i++){
        int ld=n%2;
        n/=2;
      if(ld==1)count++;
    }
    return count;
}