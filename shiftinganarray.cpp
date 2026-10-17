class Solution {
public:
    vector<int> shiftRight(const vector<int>& arr) {
        int n = arr.size();
        vector<int> ans = arr;

        int temp = ans[n-1];

        for(int i = n-1; i > 0; i--) {
            ans[i] = ans[i-1];
        }

        ans[0] = temp;

        return ans;
    }
};
