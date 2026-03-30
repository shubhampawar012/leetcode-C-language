/*problem link : https://leetcode.com/problems/trim-trailing-vowels/submissions/1961441225

logic:
first i calculate size of string  , then i come from back of 
loop check if else condition
for break the string we use '\0'    this is actual concept
*/


char* trimTrailingVowels(char* s) {
  int i=0;
  while(s[i]!='\0'){
    i++;
  }
  int count=0;

  for(int j=i-1;j>=0;j--){
    if(s[j]=='a'){
      count++;
    }else if(s[j]=='e'){
      count++;}
      else if(s[j]=='i'){
      count++;}
      else if(s[j]=='o'){
      count++;}
      else if(s[j]=='u'){
      count++;}
      else{
        break;
      }
  }if(count){       // or count!=0
  i=i-count;
  s[i]='\0';}
  return s;
  
    
}