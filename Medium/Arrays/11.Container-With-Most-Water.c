/*https://leetcode.com/problems/container-with-most-water/submissions/1974412036

Runtime:4ms
Beats:17.14%
*/
int maxArea(int* height, int heightSize) {
    int left=0;
    int right=heightSize-1;
    int max=0;
    while(left<right){
        int width=right-left;
        int h;
        if(height[left]<height[right]){    //if we choose max of this then water will overflow from one side that is the reason for taking minimum this
            h=height[left];

        }else{
             h=height[right];
        }
        int area=h*width;
        if(area>max){
            max=area;
        }
        if(height[left]<height[right]){ //it's the most crucial part of this question 
                                          // how to apporoch we need max height for max area then we move minimum of this two 
            left++;
        }else{
            right--;
        }
    }
return max;
}