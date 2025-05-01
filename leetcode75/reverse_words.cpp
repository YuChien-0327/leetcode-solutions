class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int curr=0, idx=0, len=s.length();
        while(curr < len){
            while(s[curr]==' ' && curr<len) curr++;

            if (curr != len && idx > 0) s[idx++] = ' ';
            
            int start_idx = idx;
            while(s[curr]!=' ' && curr<len) s[idx++] =  s[curr++];
            reverse(s.begin() + start_idx, s.begin() + idx);

        }
        s.resize(idx);
        return s;
    }
};
