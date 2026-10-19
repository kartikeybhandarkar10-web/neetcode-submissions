class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    unordered_map<int,int> hash;
    for(int num: nums){
        hash[num]++;
    }
    int count = 1;
    for(auto i = hash.begin(); i != hash.end(); i++) {
        if(i->second > count) {
            return true;
        }
    }
    return false;
    }
};