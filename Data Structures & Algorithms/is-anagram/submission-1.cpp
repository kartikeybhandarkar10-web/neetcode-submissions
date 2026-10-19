class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        unordered_map<char,int> container;
        unordered_map<char,int> base;
        for (char c : s) container[c]++;
        for (char c : t) base[c]++;
        return container == base;
    }
};
