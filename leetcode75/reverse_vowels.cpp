class Solution {
public:
    bool is_vowel(char c) {
        if(c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u'|| c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U') return true;
        else return false;
    }

    string reverseVowels(string s) {
        int i=0, j=s.length()-1;
        while(i < j) {
            // 左邊是母音 右邊不是母音
            if(is_vowel(s[i]) && !is_vowel(s[j])){
                j--;
                continue;
            } 
            // 右邊是母音 左邊不是母音
            else if(!is_vowel(s[i]) && is_vowel(s[j])){
                i++;
                continue;
            } 
            // 兩邊都是母音
            else if(is_vowel(s[i]) && is_vowel(s[j])) {
                char tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
            i++;
            j--;
        }
        return s;
    }
};
