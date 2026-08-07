class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0 ; 
        int r = heights.size() -1 ; 
        int res = 0 ; 

        while (l< r){
            int area = min(heights[l], heights[r]) *(r-l);
            res = max(res , area) ; 

            //width decreased ❌
//limiting height (2) did not increase ❌
            if (heights[l] <= heights[r]){
                l++ ; 
            }else{
                r--;
            }
        }
        return res ; 
    }
};
