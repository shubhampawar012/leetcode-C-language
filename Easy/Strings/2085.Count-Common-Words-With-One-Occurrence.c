/*
link :https://leetcode.com/problems/count-common-words-with-one-occurrence/submissions/1966197335

Runtime:151ms
Beats:69.23%


*/




int countWords(char** words1, int words1Size, char** words2, int words2Size) {
    
int count=0;
    for(int i=0;i<words1Size;i++){
         int t=0;
         for(int j=0;j<words2Size;j++){
           
            if(strcmp(words1[i],words2[j])==0){  //for comparing string we need use this library function
              
                t++;
            if(t>1){break;}     //t>1 mean the word is appear more than 1 time in words2 string
            }
         }int y=0;
         for(int k=0;k<words1Size;k++){
            if(t>1){break;}
            if(strcmp(words1[i],words1[k])==0){
                    y++;
                    if(y>1){break;}
            }}
            if(y==1&&t==1){     //if word is not appear more than 1 time then count++
                count++;
            }
           

    }return count;
}