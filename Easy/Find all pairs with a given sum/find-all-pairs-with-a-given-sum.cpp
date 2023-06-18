//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    bool binarySearch(int B[] ,int M , int t ){
        int low=0;
        int high= M-1;
        
        while(low <= high){
            int  mid=(low + high )/2; 
            if(t == B[mid]){
                return true;
            }else if(t > B[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
                
            }
        }
        return false;
        
    }
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        sort(A,A+N);
        sort(B,B+M);
        
        vector<pair<int , int>> ans;
        
        for(int i=0; i<N ;i++){
            if(binarySearch(B,M,X-A[i])){
                ans.push_back({A[i],X-A[i]});
            }
            
        }
        return ans;
        
    } 
        
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends