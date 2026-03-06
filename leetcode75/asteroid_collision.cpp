class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;

        for(int i: asteroids){
            if(i>0) stk.push(i);
            else {
                while (!stk.empty() && stk.top() > 0 && stk.top() < -i) {
                    stk.pop();
                }

                if (stk.empty() || stk.top() < 0) stk.push(i);
                if (!stk.empty() && stk.top() == -i) stk.pop();

            }            
        }

        vector<int> ans(stk.size());
        int idx = stk.size() - 1;

        while(!stk.empty()){
            ans[idx--] = stk.top();
            stk.pop();
        }

        return ans;
    }
};
