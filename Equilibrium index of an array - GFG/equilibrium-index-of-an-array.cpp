//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  //Your code here
    int lsum=0; 
    int tsum=0; 
    for(int i = 0;i<n;i++){
        tsum += A[i]; 
    }
    for(int i = 0;i<n;i++){
        if(tsum-A[i]==lsum)
            return i;
        else{
            tsum -= A[i];
            lsum += A[i];
        }
    }
    return -1;
}


