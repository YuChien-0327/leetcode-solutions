class Solution {
public:
    int compress(vector<char>& chars) {
        
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
    }
};
