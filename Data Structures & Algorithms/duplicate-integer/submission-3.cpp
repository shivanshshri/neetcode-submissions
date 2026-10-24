class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()<=1){
            return false;
        }
        // sorting
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size()-1; i++){
        //     if(nums[i]==nums[i+1]){
        //         return true;
        //     }
        // }

        // hash map
        unordered_set<int>seen;
        for(int num: nums){
            if(seen.count(num)){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};