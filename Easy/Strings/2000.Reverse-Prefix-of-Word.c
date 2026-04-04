/*

link:https://leetcode.com/problems/reverse-prefix-of-word/submissions/1968428266

*Runtime:0ms
Beats:100.00%


*/



char* reversePrefix(char* word, char ch) {


int i;
   for(i=0;word[i]!='\0';i++){

    if(word[i]==ch){          //if ch is found in string word then break
        break;
    }if(word[i+1]=='\0'){  //if ch is not found in string
        return word;
    }
   } 
   int left=i;
 int  right=0;
   while(left>=right){    //swap then string till ch(including ch)
    char temp=word[left];
    word[left]=word[right];
    word[right]=temp;
    left--;
    right++;
   }

   return word;  // return it
}