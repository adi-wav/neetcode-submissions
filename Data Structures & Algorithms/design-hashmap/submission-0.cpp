class MyHashMap {
private:
    vector<pair<int,int>> v;
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for(auto &i:v){
            if(i.first == key){
                i.second = value;
                return;
            }
        }
        v.push_back({key,value});
    }
    
    int get(int key) {
        for(auto i:v){
            if(i.first == key)
                return i.second;
        }
        return -1;
    }
    
    void remove(int key) {
        int val = -1;
        for(auto i:v){
            if(i.first == key)
                val = i.second;
        }
        auto it = find(v.begin(),v.end(),make_pair(key,val));
        if(it != v.end())
            v.erase(it); 
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */