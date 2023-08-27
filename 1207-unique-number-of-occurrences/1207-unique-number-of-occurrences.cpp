class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int ,int> mpp;
        unordered_set<int> s;
        
        for(auto m : arr){
            mpp[m]++;
        }
        for(auto p : mpp){
            if(!s.insert(p.second).second){
                return false;
            }
        }
        return true;
        
    }
};