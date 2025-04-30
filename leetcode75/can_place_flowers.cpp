class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        /*貪婪演算法Greedy解法*/

        int count = 0; 
        int len = flowerbed.size(); 

        for (int i = 0; i < len; ++i) {
            // 如果當前位置是 0，才有可能種花
            if (flowerbed[i] == 0) {
                // 檢查左邊是否為 0 或為邊界
                bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0);
                // 檢查右邊是否為 0 或為邊界
                bool emptyRight = (i == len - 1) || (flowerbed[i + 1] == 0);

                // 如果左右都可以種花（都是 0），代表此位置可以種花
                if (emptyLeft && emptyRight) {
                    flowerbed[i] = 1; 
                    ++count;   

                    if (count >= n) return true;
                }
            }
        }

        return count >= n;
    }
};
