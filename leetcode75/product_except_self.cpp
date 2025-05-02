class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        //從左至右計算prefix乘積
        int left = 1;
        for (int i = 0; i < n; ++i) {
            ans[i] = left;      // ans[i] 存左邊所有數的乘積（不包含 nums[i]）
            left *= nums[i];    // 更新左側乘積
        }
        
        //從右至左計算suffix乘積
        int right = 1;
        for (int i = n - 1; i >= 0; --i) {
            ans[i] *= right;    // ans[i] *= 右邊所有數的乘積（不包含 nums[i]）
            right *= nums[i];   // 更新右側乘積
        }

        return ans;
    }
};
