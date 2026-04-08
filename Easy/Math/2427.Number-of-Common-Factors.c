/* link:https://leetcode.com/problems/number-of-common-factors/submissions/1972742455

Runtime:0ms
Beats:100.00%
*/
int commonFactors(int a, int b) {
   int i,t,count=0;
   if(a>b){
       t=b;
   }else{
    t=a;
   }
   for(i=1;i<=t;i++){
    if(a%i==0&&b%i==0){
         count++;
    }
   }return count;
}