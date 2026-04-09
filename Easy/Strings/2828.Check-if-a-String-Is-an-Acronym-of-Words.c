/* link:https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/submissions/1973731721

Runtime:0ms
Beats:100.00%

Current complexity:O(N)
Readability:Excellent
Structure:Excellent
*/

bool isAcronym(char** words, int wordsSize, char* s) {
   
    if(wordsSize!=strlen(s)){      // if size of both string is diff then not acronym
        return false;
    }
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=words[i][0]){       
            return false;
        }
    }
    return true;
}