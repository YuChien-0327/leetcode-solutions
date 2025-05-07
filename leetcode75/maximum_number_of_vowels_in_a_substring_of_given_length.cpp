class Solution {
public:
    bool is_vowels(char c) {
        if( c=='a' || c=='e' || c=='i' || c=='o' || c=='u'|| c=='A' || c=='E' || c=='I' || c=='O' || c=='U') return true;
        else return false;
    }

    int maxVowels(string s, int k) {
        int i=0, j=0, count=0, max_count=0;
        while(j < s.length()){
            if(max_count == k) return max_count;
            if(is_vowels(s[j])) count++;
            if(j-i+1 >= k){
                max_count = max(max_count, count);
                if(is_vowels(s[i])) count--;
                i++;
            }
            j++;
        }
        return max_count;
    }
};
