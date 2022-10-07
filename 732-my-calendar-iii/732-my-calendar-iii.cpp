class MyCalendarThree {
    
    map<int,int> mp;
    
public:
    MyCalendarThree() {}
    
    int book(int start, int end) {
        int cur = 0, res = 0;
        mp[start]++, mp[end]--;
        for(auto i : mp){
            cur += i.second;
            res = max(res, cur);
        }
        return res;
    }
};