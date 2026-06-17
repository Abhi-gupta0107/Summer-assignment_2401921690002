class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0 , right = n-1;
        int pos = n-1;
        while(left <= right){
            int leftsquare = nums[left] * nums[left];
            int rightsquare = nums[right] * nums[right];
            if(leftsquare > rightsquare){
                result[pos] = leftsquare;
                left++;
            }
            else{
                result[pos] = rightsquare;
                right--;
            }
            pos--;
        }
        return result;
    }
};
