class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l = 0 ; 
        int r = k ; 
        vector<int> res ; 
        while(r <= nums.size()){
            int maxE = 0 ; 
            for (int i =l ; i < r ; i++){
                maxE = max(maxE , nums[i]);
            }
                res.push_back(maxE);
            r++ ; 
            l++ ; 
        }
        return res ;
        
    }
};
