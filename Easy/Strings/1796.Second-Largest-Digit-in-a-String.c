/*  link :https://leetcode.com/problems/second-largest-digit-in-a-string/submissions/1967152542


Runtime:0ms
Beats:100.00%
*/

int secondHighest(char* s) {
    int max=-1;
    for(int i=0;s[i]!='\0';i++){
            if((s[i]-'0')<10){        
                if(max<(s[i]-'0')){    // first we find max 
                    max=s[i]-'0';
                }
            }

    }
    int max2=-1;
    for(int i=0;s[i]!='\0';i++){
            if((s[i]-'0')<10){
                if(max>(s[i]-'0') &&max2<(s[i]-'0')){   // then we find 2nd max
                    max2=s[i]-'0';
                }
            }

    }return max2;
}