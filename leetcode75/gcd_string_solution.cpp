class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // 最大公因數
        string s = "";
        if (str1 + str2 != str2 + str1) return "";
        
        // 使用 C++17 的 std::gcd 計算最大公因數
        int gcdLength = gcd(str1.size(), str2.size());
        return str1.substr(0, gcdLength);
    }
};
