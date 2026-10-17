class Solution {
public:
    vector<int> reverseArray(vector<int>& arr) {
        vector<int> reversed = arr;

        reverse(reversed.begin(), reversed.end());

        return reversed;
    }
};
