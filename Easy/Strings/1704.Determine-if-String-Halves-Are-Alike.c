/*  link:https://leetcode.com/problems/determine-if-string-halves-are-alike/submissions/1966254875

Runtime:0ms
Beats:100.00%
*/


bool halvesAreAlike(char* s) {
    char arr[]={"aeiouAEIOU"};  // 1st we create char array of all vowels for checking in string s

    int i=0;
    while(s[i]!='\0'){  // we find size of string
        i++;
    }
    int countleft=0,countright=0;  //this is two pointer approch 
    for(int j=0;j<10;j++){
    int left=0,right=i-1;
    while(left<right){   
        if(arr[j]==s[left]){  //move from left for checking vowels
                countleft++;
        }
        if(arr[j]==s[right]){//move from right for checking vowels
                countright++;
        }
        left++;
        right--;

    }}if(countright==countleft){ 
        return true;
    }
    return false;
    
}