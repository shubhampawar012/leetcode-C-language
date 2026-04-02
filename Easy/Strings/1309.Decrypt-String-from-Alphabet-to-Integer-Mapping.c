/* link:https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/submissions/1966982208

Runtime:0ms
Beats:100.00%
*/

char* freqAlphabets(char* s) {
    int n = strlen(s);  // find size of string
    
    char* res = (char*)malloc((n + 1) * sizeof(char)); 
    int i = 0; 
    int j = 0; 

    while (i < n) {
        if (i + 2 < n && s[i + 2] == '#') {    //for j to z case
          
            int val = (s[i] - '0') * 10 + (s[i + 1] - '0');
            res[j++] = (char)(val + 96);
            i += 3; 
        } else {
           
            char val = s[i] - '0';         //for a to i case
            res[j++] =val + 96;
            i += 1;
        }
    }
    res[j] = '\0'; // end the string
    return res;
}