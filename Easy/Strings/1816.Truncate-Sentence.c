/*
link:https://leetcode.com/problems/truncate-sentence/submissions/1965889303

Runtime:0ms
Beats:100.00%
Approach:Simulation/Two Pointers


*/

char* truncateSentence(char* s, int k) {
    int i=0,count=0;   
    while(s[i]!='\0'){  
        if(s[i]==' '){    //in this question there is no leading space it mean if one space found mean 1 word complete
            count++;    
        }
        if(count==k){
            s[i]='\0';   //if count==k   then we cut the string  
            break;
        }
        i++;
    } 
    return s;
}
