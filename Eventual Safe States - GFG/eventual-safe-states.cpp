//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    private:
    bool dfs(int node,vector<int> &vis,vector<int> &pathvis,vector<int> adj[])
    {
        vis[node]=1;
        pathvis[node]=1;
        for(auto it:adj[node])
        {
            if(vis[it]==0)
            {
                if(dfs(it,vis,pathvis,adj)==false)
                {
                    return false;
                }
            }
            else if(pathvis[it]==1)
            {
                return false;
            }
        }
        pathvis[node]=0;
        return true;
    }
    
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        
        vector<int> vis(V,0),pathvis(V,0);
        
        vector<int> ans;
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
            {
                dfs(i,vis,pathvis,adj);
            }
        }
        for(int i=0;i<V;i++)
        {
            if(pathvis[i]==0)
                ans.push_back(i);
        }
        return ans;
        
        }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends