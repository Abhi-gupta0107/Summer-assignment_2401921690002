class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        for(int i=0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) != mp.end()){
                return{mp[target - nums[i]], i};
            }
            mp[nums[i]] = i;
        }
        return{};
    }
    int main(){
        vector<int> nums = {2,7,9,11};
        int target = 5;
        vector<int> result = twoSum(nums, target);
        cout << "Indices:";
        for(int index : result){
            cout << index << " ";
        }
        return 0;
    }
};
