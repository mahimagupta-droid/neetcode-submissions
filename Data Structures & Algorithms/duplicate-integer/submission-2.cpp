class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // TC - O(N LOGN)
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size(); i++){
        //     if(i<nums.size()-1 && nums[i] == nums[i+1]) return true;
        //     else continue;
        // }
        // return false;

        // using hashing
        unordered_set<int> hash;
        for(int i=0; i<nums.size(); i++){
            if(hash.count(nums[i]) == 1) return true;
            else hash.insert(nums[i]);
        }
        return false;
    }
};