/*
link:https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/submissions/1967046264


Runtime:0ms
Beats:100.00%
*/

char* generateTheString(int n) {

char* res = (char*)malloc((n+1)*sizeof(char));  // create result string with size (n+1)  because last char is null char ,if we not consider null char then ,error will found
if(n%2!=0){

    for(int i=0;i<n;i++){
        res[i]='a';           //if n is odd then char 'a' is appear odd number of time 
    }
    res[n]='\0';  // add null char at last 
    return res;
  }  
else{
    for(int j=0;j<n-1;j++){
        res[j]='a';        //if n is even  then char 'a' is appear odd number of time 
    }
    res[n-1]='b';          //then at last we put char 'b' ,then it also appear odd time
     res[n]='\0';
}return res;

}