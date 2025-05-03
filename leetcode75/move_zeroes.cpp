class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        /*方法一*/
        int len=nums.size(), count=0, idx=0;
        for(int i=0; i<len; i++){
            if(nums[i] == 0) count++;
            else nums[idx++] = nums[i];
        }
        for(int i=0; i<count; i++) nums[idx++] = 0;

        /*方法二*/
        int k = 0; //紀錄0的位置
        for(int i=0; i<nums.size(); i++){
            // 找到不為0的數字位置交換
            if(nums[i] != 0){
                if (i != k) swap(nums[i], nums[k]);
                k++;
            }
        }
    }
};
