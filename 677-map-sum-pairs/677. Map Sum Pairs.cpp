class MapSum {
public:
    unordered_map<string,int> values;
    unordered_map<string,int> original_words;

    MapSum() {
        
    }
    
    void insert(string key, int val) {
        int original = val;
        if(original_words.find(key) != original_words.end()){
            val = val - original_words[key];
        }
        original_words[key] = original;

        string current = "";
        for(auto &c: key){
            current = current + c;
            values[current] += val;
        }
    }
    
    int sum(string prefix) {
        return values[prefix];
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */