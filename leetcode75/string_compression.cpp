class Solution {
public:
    int compress(vector<char>& chars) {

        /* 解法一：自己寫的QQ */
        int len = chars.size();
        int idx = 0;

        for(int i=0; i<len; i++) {
            char c = chars[i];
            int count = 0;
            // 屬於同一個字元 -> 計算出線次數
            while(i<len && chars[i]==c) {
                count++;
                i++;
            }
            
            if(count == 1) chars[idx++] = c;
            else {
                chars[idx++] = c;
                string str = to_string(count);
                for (char dig : str) {
                    chars[idx++] = dig;
                }
            }   
          
            i--;       
        }
        chars.resize(idx);
        return idx;

        /* 解法二：最佳解 */
        int idx=0, start_idx=0, len=chars.size();
        for(int i=0;i<len; i++){
            // 如果字元和下一字元不一樣 or 最後一個字
            if(i+1==len || chars[i] != chars[i+1]){
                chars[idx++] = chars[i];
                int count = i - start_idx + 1;
                if (count > 1) {
                    for (char c : to_string(count)) {
                        chars[idx++] = c;
                    }
                }
                start_idx = i + 1;
            }
        }
        return idx;
    }
};
