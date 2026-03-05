class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> occur;
        set<int> visited;

        for(int i: arr) {
            occur[i] += 1;
        }

        for(auto& [key, value] : occur){
            if(visited.find(value) != visited.end()) return false;
            visited.insert(value);
        }
        return true;
    }
};
