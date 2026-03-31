
/*    link=https://leetcode.com/problems/lucky-numbers-in-a-matrix/submissions/1965270650

Runtime:0ms
Beats:100.00%

*//**

 * Note: The returned array must be malloced, assume caller calls free().

 */

int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int* ans = (int*)malloc(matrixSize * sizeof(int));
    int q=0;

    for(int i=0;i<matrixSize;i++){

         int min=matrix[i][0];//initialise min to 1st element of it's row

         int j,r=0,t=1;

        for(j=0;j<matrixColSize[i];j++){ //find minimum element in it's row
             if(min>matrix[i][j]){

                    min=matrix[i][j];

                    r=j;//Save the column index of the minimum element
                    }

        }for(int y=0;y<matrixSize;y++){

                if(min<matrix[y][r]){ //check if this minimum element is the maximum in its column

                    t=0;//Not the maximum in the column

                    break;}}

        if(t==1){

            ans[q]=min;

            q++;

        }}
    *returnSize=q;

    return ans;

}