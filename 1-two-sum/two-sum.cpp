class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for (int i = 0; i < nums.size(); ++i){
            int sum=0;
            for (int j = 0; j < nums.size(); ++j){
                if (i!=j){
                    sum=nums[i]+nums[j];
                    if(sum==target){
                    std::vector<int> fruits= {i,j};
                    return fruits;}}
            }
        }return {};
    }
};