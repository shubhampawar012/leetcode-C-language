/*   link:https://leetcode.com/problems/find-champion-i/submissions/1971789010

Runtime:0ms
Beats:100.00%

*/

int findChampion(int** grid, int gridSize, int* gridColSize) {
    int max=0,p;

    for(int i=0;i<gridSize;i++){
      int count=0;

        for(int j=0;j<gridSize;j++){
            if(i!=j && grid[i][j]==1){   // given condition 
                count++;
            }
        }
        if(max<count){               // which team is more stronger
            max=count;
            p=i;
        }
    }
return p;

}