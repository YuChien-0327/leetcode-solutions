class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";

        int i = 0;
        int n1 = word1.length(), n2 = word2.length();
        
        while (i < n1 && i < n2) {
            s += word1[i];
            s += word2[i];
            i++;
        }
        
        if (i < n1) s += word1.substr(i);
        if (i < n2) s += word2.substr(i);

        return s;
    }
};
