class Solution {
    public int minFallingPathSum(int[][] matrix) {
        int n= matrix.length;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=0 && j==0){
                    matrix[i][j]=Math.min(matrix[i][j]+matrix[i-1][j],matrix[i][j]+matrix[i-1][j+1]);
                    //System.out.print(matrix[i][j]+" ");
                }
                if(i!=0 && (j>0 && j<n-1)){
                    matrix[i][j]=Math.min(matrix[i][j]+matrix[i-1][j+1],(Math.min(matrix[i][j]+matrix[i-1][j-1],matrix[i][j]+matrix[i-1][j])));
                }
                if(i!=0 && j==n-1){
                    matrix[i][j]=Math.min(matrix[i][j]+matrix[i-1][j],matrix[i][j]+matrix[i-1][j-1]);
                    //System.out.print(matrix[i][j]+" ");
                }
                //System.out.println();
            }
        }
        int ans=Integer.MAX_VALUE;
        for(int i=n-1;i<n;i++){
            for(int j=0;j<n;j++){
                ans=Math.min(ans,matrix[i][j]);
            }
        }
        return ans;
    }
}