class Solution {
    public void solveSudoku(char[][] board) {       
        solve(board);
        
    }
    
    static boolean solve(char [][] board){
        
        for(int i = 0 ; i<9 ;i++){
            
            for(int j =0;j<9;j++){
                
                if(board[i][j]=='.'){
                    for(char num = '1' ;num <= '9' ; num++ ){
                        if(isValid(i,j,num,board)){
                            board[i][j] = num;
                            if(solve(board))
                                return true;
                            else 
                                board[i][j]='.';
                            
                        }
                        
                    }
                    return false;
                    
                    
                }
            }
        }
        return true;
        
            
    }
    
    
    static boolean isValid(int row , int col , char num, char [][] board  ){
        int gridstartrow = 3 *(row/3);
        int gridstartcol = 3*(col/3);
        
        for(int i =0 ;i<9; i++){
            if(board[row][i]==num )return false;
            if(board[i][col]==num) return false;
            if(board[gridstartrow+i/3][gridstartcol+i%3]==num)return false;
            
        }
        
            
        return true;
        
    }
    
    
        
    }
