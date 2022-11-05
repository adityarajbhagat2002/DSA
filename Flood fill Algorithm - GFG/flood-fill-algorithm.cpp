//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    void dfs(vector<vector<int>> &image, int row, int col, int n, int m, int newColor, int start, vector<vector<bool>> &vis)
    {
        image[row][col] = newColor;

        int nr, nc;

        for (int i = -1; i <= 1; i++) //use this for loop
        {
            nr = row + i;
            nc = col + i;

            if (nr >= 0 && nr < n && !vis[nr][col] && image[nr][col] == start) //when row changes
            {
                vis[nr][col] = true;
                dfs(image, nr, col, n, m, newColor, start, vis);
            }
            if (nc >= 0 && nc < m && !vis[row][nc] && image[row][nc] == start) //when col changes
            {
                vis[row][nc] = true;
                dfs(image, row, nc, n, m, newColor, start, vis);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> newimg = image;

        int n = image.size();
        int m = image[0].size();
        int start = image[sr][sc];

        vector<vector<bool>> vis(n, vector<bool>(m, false));
        vis[sr][sc] = true;
        dfs(newimg, sr, sc, n, m, newColor, start, vis);

        return newimg;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends