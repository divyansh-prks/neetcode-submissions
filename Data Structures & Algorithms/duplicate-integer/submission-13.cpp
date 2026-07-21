class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) != mp.end()) {  // 1  2 3 3
                return true ;               // 1->1
            }
            mp[i] +=1

        }
        return false;
    }
    
};