/*link :https://leetcode.com/problems/defanging-an-ip-address/submissions/1970801418

Runtime:3ms
Beats:44.14%
*/

char * defangIPaddr(char * address){
int n=strlen(address);        //find size of string
int count  =0;
for(int i=0;i<n;i++){
    if(address[i]=='.'){         // find number of   .   then for each dot we need 2 extra space
        count=count+2;
    }
}
n+=count;  //new array size
char* ans=(char*)malloc((n+1)*sizeof(char));
int j=0;
for(int i=0;i<n;i++){
    
    if(address[j]=='.'){
        ans[i]='[';
        ans[i+1]='.';
        ans[i+2]=']';
        i+=2;
    }
    else{
        ans[i]=address[j];
    }
    j++;
}
ans[n]='\0';
return ans;

}