class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // 找出目前最多糖果的數量
        int max_candy = *max_element(candies.begin(), candies.end());
      
        vector<bool> result;

        for (int candy : candies) {
            result.push_back(candy + extraCandies >= max_candy);
        }

        return result;
    }
};
