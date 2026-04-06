/*
link : https://leetcode.com/problems/score-of-a-string/submissions/1970080140

Runtime:0ms
Beats:100.00%

*/



int scoreOfString(char* s) {
int sum=0;
for(int i=0;s[i+1]!='\0';i++){       
    int y=s[i]-s[i+1];                //difference between the ASCII values of adjacent characters.
    if(y<0){
        y=y*(-1);         //if y is negative then multiplay with -1
    }
    sum+=y;
}  
return sum;
}