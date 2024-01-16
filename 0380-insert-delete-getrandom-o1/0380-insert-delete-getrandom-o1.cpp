class RandomizedSet {
public:
    
    
     vector<bool> vis;
        vector<int> ans;
    unordered_map<int, int> m;
    
    RandomizedSet() {
       
    }

    bool insert(int val) {
        
        if(m.count(val))return false;
        
        ans.push_back(val);
        vis.push_back(true);
        m[val]=ans.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(!m.count(val))return false;
        vis[m[val]]=false;
        m.erase(val);
        return  true;
        
        
    }
    
    int getRandom() {
        int i;
        do{
            i=rand()%ans.size();
            if(vis[i])return ans[i];
        
        }while(!vis[i]);
        
        
        
        return -1;
        
        
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */