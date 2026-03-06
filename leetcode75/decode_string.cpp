class Solution {
public:
    string decodeString(string s) {
        stack<char> stk;
        string ans = "";

        for(int i=0; i<s.length(); i++) {
            if(s[i] == ']') {
                string str = "";
                while(stk.top() != '[') {
                    str = stk.top() + str ;
                    stk.pop();
                }
                stk.pop();
                string number = "";
                while(!stk.empty() && isdigit(stk.top())){
                    number = stk.top() + number;
                    stk.pop();
                }
                int k_time = stoi(number);
                while(k_time--){
                    for(int p = 0; p < str.size() ; p++)
                        stk.push(str[p]);
                }
            }
            else stk.push(s[i]);
        }

        while(!stk.empty()){
            ans = stk.top() + ans;
            stk.pop();
        }

        return ans;
        
    }
};
