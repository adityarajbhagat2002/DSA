class TimeMap {
    unordered_map<string, unordered_map<int, string>> data;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        data[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        if (!data.count(key))
            return "";
        for (int currTime = timestamp; currTime >= 1; --currTime)
            if (data[key].count(currTime))
                return data[key][currTime];
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */