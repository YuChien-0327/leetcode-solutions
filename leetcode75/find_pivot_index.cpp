class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l=0, r=0, idx=0;

        for(int i=1; i<nums.size(); i++) r += nums[i];

        if(r==0) return 0;
        
        for(idx=1; idx<nums.size(); idx++){
            l += nums[idx-1];
            r -= nums[idx];

            if(l==r) return idx;
        }

        return -1;
    }
};
