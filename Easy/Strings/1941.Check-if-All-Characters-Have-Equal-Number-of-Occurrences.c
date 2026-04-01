/*https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/submissions/1965943371

Runtime:46ms
Beats:7.84%

*/

bool areOccurrencesEqual(char* s) {
    int total=0;
    for(int k=0;s[k]!='\0';k++){    //first we find what is the frequency of 1st char
        if(s[k]==s[0]){ total++;}
    }
    for(int i=0;s[i]!='\0';i++){
        int current=0;
        for(int j=0;s[j]!='\0';j++){   
            if(s[i]==s[j]) {current++;}   //we check frequency of all letters if not eqaul to the frequency of 1st char then return false
        }
        if(total!=current) { return false;}
    }
    return true;
}