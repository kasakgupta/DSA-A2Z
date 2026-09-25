class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        int j = pow(2, n);
        for (int i = 0; i < j; i++) {
            int num = i ^ (i >> 1);
            ans.push_back(num);
        }
        return ans;
    }
};