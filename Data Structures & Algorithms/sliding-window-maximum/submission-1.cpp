class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> dq;   // stores indices

        // Process first window
        for (int i = 0; i < k; i++) {
            while (!dq.empty() && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }

        // Process remaining elements
        for (int i = k; i < nums.size(); i++) {
            // Maximum of previous window
            res.push_back(nums[dq.front()]);


            //didn't understood this line . this line very confusing 
            // to me wasted 2 3 hours on this but still didn't understood it
            // Remove indices outside the current window
            while (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Remove smaller elements from the back
            while (!dq.empty() && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }

            // Add current index
            dq.push_back(i);
        }

        // Maximum of the last window
        res.push_back(nums[dq.front()]);

        return res;
    }
};