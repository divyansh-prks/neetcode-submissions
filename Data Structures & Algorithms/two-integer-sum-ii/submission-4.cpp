class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size(); 
        vector<int> res ; 
        for (int i = 0 ; i < size-1 ; i++){
            for (int j = i+1 ; j< size ; j++ ){
                if (i!=j & i < j ){
                    if(numbers[i] + numbers[j] == target){
                        res.push_back(numbers[i]);
                        res.push_back(numbers[j]);
                        return res; 
                    }
                }
            }
        }
        return res; 

    }
};
