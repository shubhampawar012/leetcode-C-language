/*  link:https://leetcode.com/problems/check-if-the-sentence-is-pangram/submissions/1966554678

Runtime:0ms
Beats:100.00%

*/


bool checkIfPangram(char* sentence) {
  char arr[]={"abcdefghijklmnopqrstvuwxyz"};//create string array for all english lowercase letter 

  for(int i=0;i<26;i++){
  int count=0;
    for(int j=0;sentence[j]!='\0';j++){   
        if(arr[i]==sentence[j]){          // check if every letter of the English alphabet appears at least once  then count =1 and break
            count=1;
            break;
        }
    }
    if(count!=1){  // if count is not equal to 1 means the letter is not appear in a sentence
        return false;  // then return false
    }
  }
  return true;
}